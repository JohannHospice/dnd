#include "GameStateMenuPause.h"
#include <GameStateMenuMain.h>
#include "GameStateMenuInventory.h"

GameStateMenuPause GameStateMenuPause::_self;

void GameStateMenuPause::create() {
    setTitle("pause");
    addOption("resume");
    addOption("inventory");
    addOption("quit");
}

void GameStateMenuPause::chooseOption(GameEngine *pEngine) const {
    switch (getPosition()) {
        case 0:
            pEngine->popState();
            break;
        case 1:
            GameStateMenuInventory::instance()->setActorHuman(_actorHuman);
            pEngine->pushState(GameStateMenuInventory::instance());
            break;
        default:
            pEngine->changeState(GameStateMenuMain::instance());
            break;
    }
}

void GameStateMenuPause::setActorHuman(ActorHuman *actorHuman) {
    _actorHuman = actorHuman;
}
