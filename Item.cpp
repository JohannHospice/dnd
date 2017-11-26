//
// Created by karibukai on 24/11/17.
//

#include "Item.h"

Item::Item(const char c) : Positionable(c) {
}

Item::Item(const char c, const std::string s) : Positionable(c), name(s) {
}

const std::string Item::toString() const {
    return name;
}
