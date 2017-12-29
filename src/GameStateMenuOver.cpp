//
// Created by karibukai on 28/12/17.
//

#include "GameStateMenuOver.h"
#include <GameStatePlay.h>

GameStateMenuOver GameStateMenuOver::_self;

void GameStateMenuOver::create() {
    _optionSize = 2;
    _title = "Game over";
    _options.push_back("restart last save");
    _options.push_back("return to menu");
}

void GameStateMenuOver::dispose() {}

void GameStateMenuOver::pause() {}

void GameStateMenuOver::update(GameEngine *game) {}

void GameStateMenuOver::chooseOption(GameEngine *game) const {
    switch (_cursorPosition) {
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
