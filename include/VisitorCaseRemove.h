//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORCASEREMOVE_H
#define DND_VISITORCASEREMOVE_H


#include <VisitorCase.h>

class VisitorCaseRemove : public VisitorCase {
public:
    const bool visit(CaseFloor *floor) const override;

    const bool visit(CaseStair *stair) const override;

    const bool visit(CaseWall *wall) const override;

    VisitorCaseRemove();

private:
    const bool visitByCaseCarry(CaseCarry *caseCarry) const;
};


#endif //DND_VISITORCASEREMOVE_H
