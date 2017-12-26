#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "Stage.h"
#include "Dynamic.h"
#include "Statistic.h"
#include "StateActorDirection.h"

class Actor : public Dynamic {
public:
    const char getChar() const override;

    virtual void update(Stage *stage) = 0;

    const Statistic *getStatistic() const;

    const bool heal(int life);

    const bool hurt(int damage);

    const bool hurt(Actor *a);

    const bool attack(Actor *pActor);

    void setDirection(StateActorDirection::Direction direction);

    const StateActorDirection::Direction getDirection() const;

protected:
    std::string name;
    Statistic *statistic;
    StateActorDirection *actorState;
};

#endif // ACTOR_H
