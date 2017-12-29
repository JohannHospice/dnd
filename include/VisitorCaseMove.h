//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORCASEMOVE_H
#define DND_VISITORCASEMOVE_H

#include "VisitorCase.h"
#include "CapsuleItem.h"
#include "VisitorDynamic.h"

class VisitorCaseMove : public VisitorCase {
public:
    explicit VisitorCaseMove(Dynamic *d);

    const bool visit(CaseFloor *) const override;

    const bool visit(CaseStair *) const override;

    const bool visit(CaseWall *) const override;

private:
    const bool visitCaseCarry(CaseCarry *caseCarry) const;

    Dynamic *_dynamic;
};

#endif //DND_VISITORCASEMOVE_H
