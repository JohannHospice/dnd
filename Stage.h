//
// Created by karibukai on 24/11/17.
//

#ifndef DND_STAGE_H
#define DND_STAGE_H


#include <string>

#include "Case.h"
#include "Actor.h"
#include "Stringable.h"

/**
 * TODO: create an actualisable class to extends Stage, Actors ...
 */
class Stage : public Stringable {
    Case ***cases;
    std::vector<Actor> actors;
    int height, width;
public:
    Stage(Case ***);

    Stage();

    const bool inBound(Vector *) const;

    const bool canMove(Vector *) const;

    void move(Actor *, Vector *);

    void put(Actor *, Vector *);

    void act() const;

    const bool inBound(int x, int y) const;

    const std::string toString() const override;

    Case * get(int x, int y) const;

    const int getWidth() const;

    const int getHeight() const;

    Case * get(const Vector *position) const;

    const bool hasActor(const Vector *pVector);

    Actor *getActor(Vector *pVector);
};


#endif //DND_STAGE_H
