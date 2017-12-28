//
// Created by karibukai on 27/12/17.
//

#ifndef DND_SPAWNER_H
#define DND_SPAWNER_H


#include <ActorMonster.h>

template<class T> class Spawner {
public:
    virtual ~Spawner() {}
    virtual ActorMonster *spawn() { return new T(); }
};


#endif //DND_SPAWNER_H
