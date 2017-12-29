//
// Created by karibukai on 26/12/17.
//

#include "VisitorDynamicInteract.h"
#include "VisitorDynamicAttack.h"
#include "VisitorDynamicInteractHuman.h"

VisitorDynamicInteract::VisitorDynamicInteract(Dynamic *pDynamic) {
    _dynamic = pDynamic;
}

const bool VisitorDynamicInteract::visit(CapsuleItem *item) const {
    return false;
}

const bool VisitorDynamicInteract::visit(ActorHuman *actorHuman) const {
    return _dynamic->accept(VisitorDynamicInteractHuman(actorHuman));
}

const bool VisitorDynamicInteract::visit(ActorMonster *actorMonster) const {
    return _dynamic->accept(VisitorDynamicAttack(actorMonster));
}
