#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "Dynamic.h"
#include "Statistic.h"
#include "ActorStateDirection.h"

class Stage;

class Actor : public Dynamic {
public:


    virtual void update(Stage *stage) = 0;

    const char getChar() const override;

    const Statistic *getStatistic() const;

    const bool heal(int life);

    const bool hurt(int damage);

    const bool hurt(Actor *a);

    const bool attack(Actor *pActor);

    void setDirection(ActorStateDirection::Direction direction);

    const ActorStateDirection::Direction getDirection() const;

    const bool changeState(ActorStateDirection::Direction);

protected:
    Actor(const std::string &name, Statistic *statistic);
    std::string _name;
    Statistic *_statistic;
    ActorStateDirection *_state = new ActorStateDirection();
};

#endif // ACTOR_H
