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
    if (getPosition() < getOptionSize() - 1) {
        Inventory *inventory = _actorHuman->getInventory();
        Item *item = inventory->getItem(getPosition());
        inventory->removeItem(item);
        item->use(_actorHuman);
    }
    pEngine->popState();
}

void GameStateMenuInventory::setActorHuman(ActorHuman *actorHuman) {
    _actorHuman = actorHuman;
}
