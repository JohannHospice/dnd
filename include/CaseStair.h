#ifndef CaseStair_H
#define CaseStair_H

#include "CaseCarry.h"

class CaseStair : public CaseCarry {
public:
    CaseStair(int i) {
        m_type = ':';
        m_stair = i;
    };

    ~CaseStair() override;

    const int getStair() const {
        return m_stair;
    }

    void setStair(int val) {
        m_stair = val;
    }

    const bool accept(VisitorCase const &visitor) override;

protected:

private:
    int m_stair;

};

#endif // CaseStair_H
