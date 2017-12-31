//
// Created by karibukai on 26/12/17.
//

#include <GameStatePlay.h>
#include "VisitorDynamicOnCaseStair.h"
#include "VisitorDynamicInteract.h"

VisitorDynamicOnCaseStair::VisitorDynamicOnCaseStair(CaseStair *pStair) {
    _stair = pStair;
}

const bool VisitorDynamicOnCaseStair::visit(ActorHuman *actorHuman) const {
    if (visitByDynamic(actorHuman)) {
        GameStatePlay::instance()->changeStage(_stair->getStair());
        return true;
    }
    return false;
}

const bool VisitorDynamicOnCaseStair::visit(ActorMonster *actorMonster) const {
    return visitByDynamic(actorMonster);
}

const bool VisitorDynamicOnCaseStair::visit(CapsuleItem *item) const {
    return visitByDynamic(item);
}

const bool VisitorDynamicOnCaseStair::visitByDynamic(Dynamic *aDynamic) const {
    if (_stair->hasContent())
        return aDynamic->accept(VisitorDynamicInteract(_stair->getContent()));
    _stair->setContent(aDynamic);
    return true;
}
