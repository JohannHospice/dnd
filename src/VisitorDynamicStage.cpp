//
// Created by karibukai on 28/12/17.
//

#include <GameStatePlay.h>
#include "VisitorDynamicStage.h"

const bool VisitorDynamicStage::visit(Item *item) const {
    return true;
}

const bool VisitorDynamicStage::visit(ActorHuman *actorHuman) const {
    if (!actorHuman->isAlive()) {
        GameStatePlay::instance()->gameOver();
        return true;
    }
    return false;
}

const bool VisitorDynamicStage::visit(ActorMonster *actorMonster) const {
    if (!actorMonster->isAlive()) {
        if (actorMonster->getItem() != nullptr)
            _stage->getMap()->set(actorMonster->getItem(), *actorMonster->getVector());
        _stage->removeActor(actorMonster);
        return true;
    }
    return false;
}
