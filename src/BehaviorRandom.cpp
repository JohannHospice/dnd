#include "BehaviorRandom.h"
#include "ActorMonster.h"

static int myrand(int min, int max) {
    return min + (rand() % static_cast<int>(max - min + 1));
}

void BehaviorRandom::act(ActorMonster *monster, Map *map) {
    switch (myrand(0, 4)) {
        case 0:
            monster->moveUp(map);
            break;
        case 1:
            monster->moveDown(map);
            break;
        case 2:
            monster->moveLeft(map);
            break;
        default:
            monster->moveRight(map);
            break;
    }
}

