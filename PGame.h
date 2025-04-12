
#ifndef PGAME_H
#define PGAME_H
#include <iostream>

#include "Turn.h"

using namespace std;


class PGame {
public:
    virtual void display_rules() = 0;
    virtual void play_game() = 0;
};

#endif //PGAME_H
