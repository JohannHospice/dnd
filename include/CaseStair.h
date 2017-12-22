#ifndef CaseStair_H
#define CaseStair_H

#include <CarryCase.h>


class CaseStair : public CarryCase
{
    public:
        CaseStair();
        virtual ~CaseStair();

        int Getstair() { return m_stair; }
        void Setstair(int val) { m_stair = val; }

    protected:

    private:
        int m_stair;
};

#endif // CaseStair_H
