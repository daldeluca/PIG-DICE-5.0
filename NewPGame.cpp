#include "Players.h"
#include "NewPGame.h"
#include <limits>

NewPGame::NewPGame() {
}
NewPGame::~NewPGame() {

}
void NewPGame::display_rules() {
    cout << "Let's Play PIG Dice!\n* See how many turns it takes you to get to 20.\n* Turn ends when you hold or roll a 1.\n* If you roll a 1, you lose all points for the turn.";
    cout << "\n* If you hold, you save all points for the turn.\n";
}
void NewPGame::play_game() {
    display_rules();
    string name1, name2;
    cout << "\nEnter player1's name: ";
    getline(std::cin, name1);
    cout << "Enter player2's name: ";
    getline(std::cin, name2);
    players[0].set_player_name(name1);
    players[1].set_player_name(name2);
    const int WIN_SCORE = 50;
    bool game_over = false;
    int current_player = 0;
    while (!game_over) {
        Players& p = players[current_player];
        Turn& t = p.get_turn();
        p.reset_turn();
        cout << "\n";
        cout << p.get_player_name() << " (Score: " << p.get_game_score()
                  << ") - Turn " << (t.get_turn_count() + 1) << "\n";
        bool turn_active = true;
        while (turn_active) {
            char choice;
            cout << "roll or hold? (r/h): ";
            cin >> choice;
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (choice == 'r') {
                int roll = t.take_turn();  // Return die roll
                cout << "Die: " << roll << "\n";
                if (roll == 1) {
                    cout << "Turn over. No score.\n";
                    t.increment_turn();
                    turn_active = false;
                }
            } else if (choice == 'h') {
                int new_score = p.get_game_score() + t.get_score_this_turn();
                p.set_game_score(new_score);
                cout << "Score for turn: " << t.get_score_this_turn() << "\n";
                cout << p.get_player_name() << "'s total score: " << new_score << "\n";
                t.increment_turn();
                turn_active = false;
            } else {
                cout << "Invalid input. Enter 'r' or 'h'.\n";
            }
        }
        if (p.get_game_score() >= WIN_SCORE) {
            game_over = true;
            cout << "\nCongratualtions, " << p.get_game_score() << "! you're the winner!\n";
            cout << "You had a final score of " << p.get_game_score();
            cout << " after " << p.get_turn().get_turn_count() << " turns.\n";
        }
        current_player = (current_player + 1) % 2;  // Switch to next player
    }
}

