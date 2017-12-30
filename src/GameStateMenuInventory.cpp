#include "GameStateMenuInventory.h"

GameStateMenuInventory GameStateMenuInventory::_self;

void GameStateMenuInventory::create() {
    setTitle("inventory");
    Inventory *inventory = _actorHuman->getInventory();
    for (Item *item: inventory->getItems())
        addOption(item->getName().c_str());
    addOption("return");
}

void GameStateMenuInventory::chooseOption(GameEngine *pEngine) const {
    if (getPosition() <= getOptionSize()) {
        _actorHuman->getInventory()
                ->getItem(getPosition())
                ->use(_actorHuman);
    } else
        pEngine->popState();
}

void GameStateMenuInventory::setActorHuman(ActorHuman *actorHuman) {
    _actorHuman = actorHuman;
}
