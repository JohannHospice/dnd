#include "CaseStair.h"
#include "VisitorCase.h"

CaseStair::~CaseStair() = default;

const bool CaseStair::accept(VisitorCase const &visitor) {
    return visitor.visit(this);
}
