#ifndef CARRYCASE_H
#define CARRYCASE_H

#include "Case.h"
#include "Dynamic.h"

class CaseCarry: public Case
{
    public:
        CaseCarry();
        virtual ~CaseCarry();

        Dynamic *Getcontent() { return m_content; }
        void Setcontent(Dynamic *val) { m_content = val; }

    protected:

    private:
        Dynamic *m_content;
};

#endif // CARRYCASE_H
