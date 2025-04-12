
#include "Players.h"

#include <iostream>

Players::Players(){
    name = "";
    game_score = 0;
}

void Players::set_player_name(string& new_name) {
    name = new_name;
}

string Players::get_player_name() const{
    return name;
}

void Players::set_game_score(int score) {
    game_score = score;
}

int Players::get_game_score() const{
    return game_score;
}

Turn& Players::get_turn() {
    return playerTurn;
}
void Players::reset_turn() {
    playerTurn.reset_turn_score();
}

