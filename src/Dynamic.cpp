#include "Dynamic.h"
#include "Stage.h"

Dynamic::Dynamic() {}

Dynamic::~Dynamic() {
    //dtor
}

void Dynamic::setVector(const Vector &vector) {
    *_vector = vector;
}

const Vector *Dynamic::getVector() const {
    return _vector;
}

