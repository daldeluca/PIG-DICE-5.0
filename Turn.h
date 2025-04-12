
#ifndef TURN_H
#define TURN_H
#include "Die.h"

using namespace std;

class Turn {
private:
    Die die;
    int score_this_turn;
    int turn_count;
    bool turn_over;
    char choice;

public:
    Turn();
    int get_score_this_turn();
    int get_turn_count();
    int take_turn();
    void reset_turn_score();
    void increment_turn();
};
#endif //TURN_H
