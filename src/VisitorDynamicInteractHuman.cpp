//
// Created by karibukai on 29/12/17.
//

#include <VisitorDynamicItem.h>
#include <VisitorDynamicAttack.h>
#include "VisitorDynamicInteractHuman.h"

const bool VisitorDynamicInteractHuman::visit(CapsuleItem *item) const {
    return _human->accept(VisitorDynamicItem(item));
}

const bool VisitorDynamicInteractHuman::visit(ActorHuman *actorHuman) const {
    return false;
}

const bool VisitorDynamicInteractHuman::visit(ActorMonster *actorMonster) const {
    return actorMonster->accept(VisitorDynamicAttack(_human));
}
