#include "GameStateMenuMain.h"
#include "GameStatePlay.h"

GameStateMenuMain GameStateMenuMain::_self;

void GameStateMenuMain::create() {
    _title = "Dungeon and dragon";
    _options.push_back("play");
    _options.push_back("exit");
    _optionSize = 2;
}

void GameStateMenuMain::chooseOption(GameEngine *game) const {
    switch (_cursorPosition) {
        case 0:
            // todo load or new memento
            GameStatePlay::instance()->restore(PlayMemento::newGame());
            game->pushState(GameStatePlay::instance());
            break;
        default:
            game->quit();
            break;
    }
}

void GameStateMenuMain::dispose() {}

void GameStateMenuMain::pause() {}

void GameStateMenuMain::update(GameEngine *game) {}
