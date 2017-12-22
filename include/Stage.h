#ifndef STAGE_H
#define STAGE_H
#include "Case.h"

class Actor;

class Stage
{
    public:
        Stage();
        virtual ~Stage();

        Actor *Getactors() { return actors; }
        void Setactors(Actor *val) { actors = val; }
        Case **Getcases() { return cases; }
        void Setcases(Case **val) { cases = val; }

        bool getCase(int i, int j);

    protected:

    private:
        Actor *actors;
        Case **cases;
};

#endif // STAGE_H
