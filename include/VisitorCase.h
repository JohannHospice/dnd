//
// Created by karibukai on 26/12/17.
//

#ifndef DND_MOVECASEVISITOR_H
#define DND_MOVECASEVISITOR_H

#include "CaseFloor.h"
#include "CaseStair.h"
#include "CaseWall.h"

class VisitorCase {
public:
    virtual const bool visit(CaseFloor *) const = 0;

    virtual const bool visit(CaseStair *) const = 0;

    virtual const bool visit(CaseWall *) const = 0;
};

#endif //DND_MOVECASEVISITOR_H
