#include "GameStateMenuPause.h"
#include <GameStateMenuMain.h>
#include <GameStatePlay.h>
#include "GameStateMenuInventory.h"
#include "PlayMementoManager.h"

GameStateMenuPause GameStateMenuPause::_self;

void GameStateMenuPause::create() {
    setTitle("pause");
    addOption("resume");
    addOption("inventory");
    addOption("save");
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
        case 2:
            PlayMementoManager::instance()->add(GameStatePlay::instance()->save());
            break;
        default:
            pEngine->popStateUntil(GameStateMenuMain::instance());
            break;
    }
}

void GameStateMenuPause::setActorHuman(ActorHuman *actorHuman) {
    _actorHuman = actorHuman;
}
