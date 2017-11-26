//
// Created by karibukai on 22/11/17.
//

#include "Stairs.h"

Stairs::Stairs(const char c) : Case(c) {
}

Stairs::Stairs(const char c, const int i) : Case(c) {
    stage = i;
}
