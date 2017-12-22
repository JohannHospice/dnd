#ifndef BEHAVIOconstR_H
#define BEHAVIOR_H

#include "Stage.h"
#include "Actor.h"

class Behavior
{
    public:
        virtual ~Behavior();

        virtual void act(Actor actor, Stage stage) = 0;

    protected:

    private:
};

#endif // BEHAVIOR_H
