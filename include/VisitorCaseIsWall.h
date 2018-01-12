//
// Created by karibukai on 06/01/18.
//

#ifndef DND_VISITORCASEISWALL_H
#define DND_VISITORCASEISWALL_H


#include <VisitorCase.h>

class VisitorCaseIsWall: public VisitorCase {
public:
    VisitorCaseIsWall();

    const bool visit(CaseFloor *floor) const override;

    const bool visit(CaseStair *stair) const override;

    const bool visit(CaseWall *wall) const override;
};


#endif //DND_VISITORCASEISWALL_H
