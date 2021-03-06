#include "VisitorDynamicAttack.h"

VisitorDynamicAttack::VisitorDynamicAttack(Actor *pHuman) {
    _actor = pHuman;
}

const bool VisitorDynamicAttack::visit(CapsuleItem *item) const {
    return false;
}

const bool VisitorDynamicAttack::visit(ActorHuman *actorHuman) const {
    _actor->attack(actorHuman);
    return true;
}

const bool VisitorDynamicAttack::visit(ActorMonster *actorMonster) const {
    _actor->attack(actorMonster);
    return true;
}
