//
// Created by karibukai on 28/12/17.
//

#ifndef DND_BEHAVIORRANDOM_H
#define DND_BEHAVIORRANDOM_H


#include <Behavior.h>

class BehaviorRandom : public Behavior {
public:
    void act(ActorMonster *monster, Map *map) override;
};


#endif //DND_BEHAVIORRANDOM_H
