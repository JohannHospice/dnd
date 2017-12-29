//
// Created by karibukai on 29/12/17.
//

#include "ItemPotion.h"
#include "Actor.h"

ItemPotion::ItemPotion(int i) : _heal(i) {}

void ItemPotion::use(Actor *actor) {
    actor->heal(_heal);
}

