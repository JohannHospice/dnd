//
// Created by karibukai on 25/11/17.
//

#ifndef DND_POSITIONABLE_H
#define DND_POSITIONABLE_H


#include "Vector.h"
#include "Characterisable.h"

class Positionable: public Characterisable {
    Vector *position;
public:

    explicit Positionable(const char);

    void setPosition(const Vector *);

    Vector * getPosition() const;
};


#endif //DND_POSITIONABLE_H
