//
// Created by karibukai on 22/11/17.
//

#include "Case.h"

Case::Case(const char c) : Characterisable(c) {
}

const bool Case::hasActor() const {
    return actor != nullptr;
}

const bool Case::hasItem() const {
    return item != nullptr;
}

void Case::setItem(Item *item) {
    this->item = item;
}

void Case::setActor(Actor *actor) {
    this->actor = actor;
}

Actor *Case::getActor() const {
    return actor;
}

Item *Case::getItem() const {
    return item;
}
