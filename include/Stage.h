#ifndef STAGE_H
#define STAGE_H
#include "Case.h"

#include "Dynamic.h"


class Stage
{
    public:
        Stage();
        virtual ~Stage();

        Dynamic *Getactors() { return actors; }
        void Setactors(Dynamic *val) { actors = val; }
        Case **Getcases() { return cases; }
        void Setcases(Case **val) { cases = val; }

        const Case getCase(const int i, const int j) const;

        bool move(const Dynamic &Dynamic, const int i, const int j);

        bool canMove(const int i, const int j) const;

    protected:

    private:
        Dynamic *actors;
        Case **cases;
};

#endif // STAGE_H
