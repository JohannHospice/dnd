//
// Created by karibukai on 26/12/17.
//

#include "VisitorDynamicOnCaseStair.h"
#include "EventActorStair.h"
#include "VisitorDynamicInteract.h"

VisitorDynamicOnCaseStair::VisitorDynamicOnCaseStair(CaseStair *pStair) {
    _stair = pStair;
}

const bool VisitorDynamicOnCaseStair::visit(ActorHuman *actorHuman) const {
    if (visitByDynamic(actorHuman)) {
        actorHuman->addEvent(new EventActorStair(_stair->getStair()));
        return true;
    }
    return false;
}

const bool VisitorDynamicOnCaseStair::visit(ActorMonster *actorMonster) const {
    return visitByDynamic(actorMonster);
}

const bool VisitorDynamicOnCaseStair::visit(Item *item) const {
    return visitByDynamic(item);
}

const bool VisitorDynamicOnCaseStair::visitByDynamic(Dynamic *aDynamic) const {
    if (_stair->hasContent())
        return aDynamic->accept(new VisitorDynamicInteract(_stair->getContent()));
    _stair->setContent(aDynamic);
    return true;
}
