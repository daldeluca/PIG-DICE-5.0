
#ifndef PLAYERS_H
#define PLAYERS_H
using namespace std;
#include <string>
#include "Turn.h"

class Players {
private:
    string name;
    int game_score;
    Turn playerTurn;
    public:
    Players();
    void set_player_name(string&);
    string get_player_name() const;
    void set_game_score(int);
    int get_game_score()const;

    Turn& get_turn();
    void reset_turn();

};



#endif //PLAYERS_H
