#include "Dynamic.h"

Dynamic::~Dynamic() {
    //dtor
}

void Dynamic::addEvent(EventDynamic *event) {
    _events.push_back(event);
}

void Dynamic::setVector(const Vector &vector) {
    _vector->setX(vector.getX());
    _vector->setY(vector.getY());

}
Vector *Dynamic::getVector() const {
    return _vector;
}
