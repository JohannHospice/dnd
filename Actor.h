//
// Created by karibukai on 20/11/17.
//

#ifndef DND_PLAYER_H
#define DND_PLAYER_H


#include "Vector.h"
#include "Characterisable.h"
#include "Statistics.h"
#include "Item.h"
#include "Inventory.h"
#include "Stage.h"


class Actor : public Positionable {
    Statistics *stats;
protected:
    enum Direction {
        up = '^', down = 'V', left = '<', right = '>'
    };
    Direction direction = Direction::down;

    const bool interactCase(Stage *pStage, Vector *pVector);

    const bool handleDirection(const Direction direction, Stage *pStage, Vector *target);

    const bool handleInputMove(Stage *pStage, const char input);

public:

    explicit Actor(const char);

    Actor(const char, Statistics *);

    virtual void act(Stage *pStage) = 0;

    void attack(Actor *);

    void use(Item *);;

    void suby(const Actor *);

    void suby(const int);

    const Statistics *getStatistics() const;

    void setDirection(const Direction direction);

};

#endif //DND_PLAYER_H