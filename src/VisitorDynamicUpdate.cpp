//
// Created by karibukai on 28/12/17.
//

#include <GameStatePlay.h>
#include "VisitorDynamicUpdate.h"

const bool VisitorDynamicUpdate::visit(Item *item) const {
    if (!item->isActive()) {
        _stage->remove(item);
        return true;
    }
    return false;
}

const bool VisitorDynamicUpdate::visit(ActorHuman *actorHuman) const {
    if (actorHuman->isAlive()) {
        actorHuman->update(_stage->getMap());
        return true;
    }
    GameStatePlay::instance()->gameOver();
    return false;
}

const bool VisitorDynamicUpdate::visit(ActorMonster *actorMonster) const {
    if (actorMonster->isAlive()) {
        actorMonster->update(_stage->getMap());
        return true;
    }
    _stage->remove(actorMonster);
    if (actorMonster->hasItem())
        _stage->add(actorMonster->getItem(), *actorMonster->getVector());
    return false;
}
