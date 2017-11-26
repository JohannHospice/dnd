//
// Created by karibukai on 22/11/17.
//

#ifndef DND_CASE_H
#define DND_CASE_H


#include <vector>
#include <string>
#include "Vector.h"
#include "Characterisable.h"
#include "Actor.h"

class Case : Characterisable {
    Actor *actor = nullptr;
    Item *item = nullptr;
public:
    explicit Case(const char);

    const bool hasActor() const;

    const bool hasItem() const;

    void setItem(Item *);

    void setActor(Actor *);

    Actor * getActor() const;

    Item * getItem() const;
};


#endif //DND_CASE_H
