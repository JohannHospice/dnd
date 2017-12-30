#include "GameStateMenuMain.h"
#include "GameStatePlay.h"

GameStateMenuMain GameStateMenuMain::_self;

void GameStateMenuMain::create() {
    setTitle("Dungeon and dragon");
    addOption("play");
    addOption("exit");
}

void GameStateMenuMain::chooseOption(GameEngine *game) const {
    switch (getPosition()) {
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

