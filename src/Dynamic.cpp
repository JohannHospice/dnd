#include "Dynamic.h"
#include "Stage.h"

Dynamic::Dynamic(Stage *stage) : _stage(stage) {}

Dynamic::Dynamic() {}

Dynamic::~Dynamic() {
    //dtor
}

void Dynamic::setVector(const Vector &vector) {
    _vector->setX(vector.getX());
    _vector->setY(vector.getY());

}

const Vector *Dynamic::getVector() const {
    return _vector;
}

void Dynamic::removeFromStage() {
    _stage->remove(this);
}


void Dynamic::setStage(Stage *stage) {
    _stage = stage;
}

