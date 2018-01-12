//
// Created by karibukai on 06/01/18.
//

#include "VisitorCaseIsWall.h"

VisitorCaseIsWall::VisitorCaseIsWall() {
}

const bool VisitorCaseIsWall::visit(CaseFloor *floor) const {
    return false;
}

const bool VisitorCaseIsWall::visit(CaseStair *stair) const {
    return false;
}

const bool VisitorCaseIsWall::visit(CaseWall *wall) const {
    return true;
}
