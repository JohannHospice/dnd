//
// Created by karibukai on 25/11/17.
//

#include "Positionable.h"

Positionable::Positionable(const char c) : Characterisable(c) {}

void Positionable::setPosition(const Vector *vector) {
    position->setXY(vector->getX(), vector->getY());
}

Vector *Positionable::getPosition() const {
    return position;
}
