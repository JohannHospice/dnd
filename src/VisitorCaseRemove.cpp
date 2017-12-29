//
// Created by karibukai on 26/12/17.
//

#include "VisitorCaseRemove.h"

VisitorCaseRemove::VisitorCaseRemove() {}

const bool VisitorCaseRemove::visit(CaseFloor *floor) const {
    return visitByCaseCarry(floor);
}

const bool VisitorCaseRemove::visit(CaseStair *stair) const {
    return visitByCaseCarry(stair);
}

const bool VisitorCaseRemove::visit(CaseWall *wall) const {
    return false;
}

const bool VisitorCaseRemove::visitByCaseCarry(CaseCarry *caseCarry) const {
    if (caseCarry->hasContent()) {
        caseCarry->setContent(nullptr);
        return true;
    } else return false;
}
