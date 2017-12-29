#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include "Stage.h"

class ActorMonster;

class Behavior {
public:
    virtual void act(ActorMonster *monster, Map *map) =0;

protected:

private:
};

#endif // BEHAVIOR_H
