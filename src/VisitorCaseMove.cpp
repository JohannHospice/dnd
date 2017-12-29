#include <Actor.h>
#include <VisitorCaseMove.h>
#include "VisitorDynamicOnCaseStair.h"
#include "VisitorDynamicInteract.h"

VisitorCaseMove::VisitorCaseMove(Dynamic *d) {
    _dynamic = d;
}

const bool VisitorCaseMove::visit(CaseFloor *caseFloor) const {
    if (caseFloor->hasContent()) {
        _dynamic->accept(VisitorDynamicInteract(caseFloor->getContent()));
        return false;
    }
    caseFloor->setContent(_dynamic);
    return true;
}

const bool VisitorCaseMove::visit(CaseStair *caseStair) const {
    return _dynamic->accept(VisitorDynamicOnCaseStair(caseStair));
}

const bool VisitorCaseMove::visit(CaseWall *) const {
    return false;
}
