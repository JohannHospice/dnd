#include <GameStatePlay.h>
#include "VisitorDynamicUpdateStage.h"

const bool VisitorDynamicUpdateStage::visit(CapsuleItem *item) const {
    if (item->empty()) {
        _stage->remove(item);
        return false;
    }
    return true;
}

const bool VisitorDynamicUpdateStage::visit(ActorHuman *actorHuman) const {
    if (actorHuman->isAlive()) {
        actorHuman->update(_stage->getMap());
        return true;
    }
    GameStatePlay::instance()->gameOver();
    return false;
}

const bool VisitorDynamicUpdateStage::visit(ActorMonster *actorMonster) const {
    if (actorMonster->isAlive()) {
        actorMonster->update(_stage->getMap());
        return true;
    }
    _stage->remove(actorMonster);
    if (actorMonster->hasItem())
        _stage->add(new CapsuleItem(actorMonster->getItem()), *actorMonster->getVector());
    return false;
}
