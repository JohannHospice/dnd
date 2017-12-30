#ifndef GAMESTATEMENUMAIN_H
#define GAMESTATEMENUMAIN_H

#define OPTION_PLAY 0
#define OPTION_QUIT 1

#include <string>
#include <vector>
#include "GameStateMenu.h"


class GameStateMenuMain : public GameStateMenu {
public:
    void create() override;

    static GameStateMenuMain *instance() { return &_self; }

private:
    static GameStateMenuMain _self;

    void chooseOption(GameEngine *pEngine) const override;
};

#endif // GAMESTATEMENUMAIN_H
