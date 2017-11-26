//
// Created by karibukai on 22/11/17.
//

#ifndef DND_PLAYER_H
#define DND_PLAYER_H

#include <vector>
#include "Human.h"

class Player {
    char *name;
    std::vector<Human> humans;
public:
    void addHuman(Human *);
};


#endif //DND_PLAYER_H
