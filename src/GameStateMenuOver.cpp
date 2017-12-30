//
// Created by karibukai on 28/12/17.
//

#include "GameStateMenuOver.h"
#include <GameStatePlay.h>

GameStateMenuOver GameStateMenuOver::_self;

void GameStateMenuOver::create() {
    setTitle("Game over");
    addOption("restart last save");
    addOption("return to menu");
}

void GameStateMenuOver::chooseOption(GameEngine *game) const {
    switch (getPosition()) {
        case 0:
            GameStatePlay::instance()->restore(_memento);
            game->changeState(GameStatePlay::instance());
            break;
        default:
            game->popState();
            break;
    }
}

void GameStateMenuOver::setMemento(PlayMemento *memento) {
    _memento = memento;
}
