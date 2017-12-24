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

Vector Vector::operator+(Vector const &a) const {
    return Vector(_x + a._x, _y + a._y);
}

Vector Vector::operator-(Vector const &a) const {
    return Vector(_x - a._x, _y - a._y);
}

Vector Vector::operator*(Vector const &a) const {
    return Vector(_x * a._x, _y * a._y);
}

Vector Vector::operator/(Vector const &a) const {
    return Vector(_x / a._x, _y / a._y);
}
