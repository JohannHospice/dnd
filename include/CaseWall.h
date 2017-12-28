//
// Created by karibukai on 25/12/17.
//

#ifndef DND_CASEWALL_H
#define DND_CASEWALL_H

#include "Case.h"

class CaseWall : public Case {
public:
    enum Type {
        VERTICAL = '|',
        HORIZOTAL = '-',
        EMPTY = ' ',
    };

    explicit CaseWall(Type type) {
        m_type = type;
    };

    const bool accept(VisitorCase const &visitor) override;

};


#endif //DND_CASEWALL_H
