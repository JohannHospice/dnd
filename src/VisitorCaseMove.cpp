//
// Created by karibukai on 26/12/17.
//

#include <Actor.h>
#include <VisitorCaseMove.h>
#include "VisitorDynamicOnCaseStair.h"
#include "VisitorDynamicInteract.h"

VisitorCaseMove::VisitorCaseMove(Dynamic *d) {
    _dynamic = d;
}

const bool VisitorCaseMove::visit(CaseFloor *caseFloor) const {
    if (caseFloor->hasContent())
        return _dynamic->accept(new VisitorDynamicInteract(caseFloor->getContent()));
    caseFloor->setContent(_dynamic);
    return true;
}

const bool VisitorCaseMove::visit(CaseStair *caseStair) const {
    return _dynamic->accept(new VisitorDynamicOnCaseStair(caseStair));
}

const bool VisitorCaseMove::visit(CaseWall *) const {
    return false;
}
