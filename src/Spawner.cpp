//
// Created by karibukai on 27/12/17.
//

#include <ActorMonster.h>
#include "Spawner.h"

ActorMonster *Spawner::spawn() {
    return _monster.clone();
}

Spawner::Spawner(ActorMonster pMonster) : _monster(pMonster) {}
