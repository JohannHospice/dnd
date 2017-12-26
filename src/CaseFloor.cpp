//
// Created by karibukai on 26/12/17.
//

#include "CaseFloor.h"
#include "VisitorCase.h"

const bool CaseFloor::accept(VisitorCase const &visitor) {
    return visitor.visit(this);
}
