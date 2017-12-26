//
// Created by karibukai on 25/12/17.
//

#ifndef DND_CASEFLOOR_H
#define DND_CASEFLOOR_H

#include "CaseCarry.h"

class CaseFloor : public CaseCarry {
public:
    enum Type {
        CORRIDOR = '#',
        ROOM = '.'
    };

    explicit CaseFloor(Type type) {
        m_type = type;
    };

    const bool accept(VisitorCase const &visitor) override;

protected:

private:
};


#endif //DND_CASEFLOOR_H
