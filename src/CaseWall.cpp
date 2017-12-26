//
// Created by karibukai on 25/12/17.
//

#include "CaseWall.h"
#include "VisitorCase.h"

const bool CaseWall::accept(VisitorCase const &visitor) {
    return visitor.visit(this);
}
