//
// Created by karibukai on 22/11/17.
//

#include "Vector.h"

Vector::Vector(Vector *pVector) : x(pVector->getX()), y(pVector->getY()) {
}

Vector::Vector(const int x, const int y) : x(x), y(y) {
}

Vector *Vector::setX(const int x) {
    this->x = x;
    return this;
}

Vector *Vector::setY(const int y) {
    this->y = y;
    return this;
}


Vector *Vector::setXY(const int x, const int y) {
    return setX(x)->setY(y);
}

const int Vector::getX() const {
    return x;
}

const int Vector::getY() const {
    return y;
}

Vector *Vector::addY(const int i) {
    y += i;
    return this;
}

Vector *Vector::addX(const int i) {
    x += i;
    return this;
}
