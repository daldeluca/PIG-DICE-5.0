using namespace std;
#include "Turn.h"
#include <iostream>
//
Turn::Turn() {
    score_this_turn = 0;
    turn_count = 0;
}

int Turn:: get_score_this_turn() {
    return score_this_turn;
}

int Turn:: get_turn_count() {
    return turn_count;
}

void Turn:: reset_turn_score() {
    score_this_turn = 0;
}
int Turn::take_turn() {
    int roll = die.roll_die();
    if (roll == 1) {
        score_this_turn = 0;
    } else {
        score_this_turn += roll;
    }
    return roll;
}
void Turn::increment_turn() {
    ++turn_count;
}


