#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "Stage.h"
#include "Dynamic.h"
#include "Statistic.h"

class Actor : public Dynamic
{
    public:
        Actor(){ };

        virtual void update(Stage *stage) = 0;

    protected:

    private:
        std::string name;
        Statistic *statistic;
};

#endif // ACTOR_H
