#include "Vector.h"

Vector::Vector() {
    //ctor
}

Vector::~Vector() {
    //dtor
}

const int Vector::getX() const {
    return _x;
}

void Vector::setX(const int x) {
    Vector::_x = x;
}

const int Vector::getY() const {
    return _y;
}

void Vector::setY(const int y) {
    Vector::_y = y;
}

Vector *Vector::add(const Vector &b) const {
    return new Vector(_x + b.getX(), _y + b.getY());
}

Vector Vector::operator+(Vector const &a) const { return Vector(_x + a._x, _y + a._y); }

void Vector::addX(int x) {
    _x += x;
}

void Vector::addY(int y) {
    _y += y;
}


Vector *operator+(const Vector &b, const Vector &a) {
    return new Vector(b.getX() + a.getX(), b.getY() + a.getY());
}

