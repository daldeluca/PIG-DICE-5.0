//
// Created by administrator on 4/7/25.
//

#ifndef NEWPGAME_H
#define NEWPGAME_H
#include "Players.h"
#include "PGame.h"

class NewPGame : public PGame{
private:
    Players players[2];
    public:
    NewPGame();
    ~NewPGame();
    void display_rules() override;
    void play_game() override;

};



#endif //NEWPGAME_H
