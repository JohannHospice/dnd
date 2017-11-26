//
// Created by karibukai on 22/11/17.
//

#ifndef DND_STAIRS_H
#define DND_STAIRS_H


#include "Case.h"

class Stairs : public Case {
    int stage;
public:
    explicit Stairs(const char);

    Stairs(const char, const int);
};


#endif //DND_STAIRS_H
