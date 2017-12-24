#ifndef BEHAVIOconstR_H
#define BEHAVIOR_H

#include "Stage.h"
#include "ActorMonster.h"

class Behavior
{
    public:
        virtual void act(Stage *stage) = 0;

    protected:

    private:
        ActorMonster * m_actorMonster;
};

#endif // BEHAVIOR_H
