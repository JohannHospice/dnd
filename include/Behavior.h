#ifndef BEHAVIOconstR_H
#define BEHAVIOR_H

#include "Stage.h"
#include "ActorMonster.h"

class Behavior {
public:
    virtual void act(ActorMonster const &monster, Stage const &stage) = 0;

protected:

private:
};

#endif // BEHAVIOR_H
