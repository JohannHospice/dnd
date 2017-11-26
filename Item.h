//
// Created by karibukai on 24/11/17.
//

#ifndef DND_ITEM_H
#define DND_ITEM_H


#include "Actor.h"
#include "Positionable.h"

class Item : Positionable, Stringable {
    std::string name;

public:
    explicit Item(const char);

    Item(const char c, const std::string s);

    virtual void use(Actor *actor) = 0;

    const std::string toString() const override;
};


#endif //DND_ITEM_H
