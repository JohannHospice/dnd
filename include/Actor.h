#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "Stage.h"
#include "Dynamic.h"
#include "Statistic.h"

class Behavior;

class Actor : public Dynamic
{
    public:
        Actor();
        virtual ~Actor();

        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }
        Behavior *Getbehavior() { return behavior; }
        void Setbehavior(Behavior *val) { behavior = val; }
        Statistic *Getstatistic() { return statistic; }
        void Setstatistic(Statistic *val) { statistic = val; }
        void act(Stage);

    protected:

    private:
        std::string name;
        Behavior *behavior;
        Statistic *statistic;
};

#endif // ACTOR_H
