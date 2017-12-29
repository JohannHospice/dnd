#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "Dynamic.h"
#include "Statistic.h"
#include "ActorStateDirection.h"

class Map;

class Actor : public Dynamic {
public:
    Actor(Stage *stage, const std::string &name, Statistic *statistic);

    Actor(const std::string &name, Statistic *statistic);

    virtual void update(Map *map) = 0;

    const char getChar() const override;

    const Statistic *getStatistic() const;

    const bool heal(int life);

    const bool hurt(int damage);

    const bool hurt(Actor *a);

    const bool attack(Actor *pActor);

    const bool isAlive() const;


    const ActorStateDirection::Direction getDirection() const;

    const bool changeState(ActorStateDirection::Direction);

    bool moveUp(Map *map);

    bool moveDown(Map *map);

    bool moveLeft(Map *map);

    bool moveRight(Map *map);

    const int getLife() const;

protected:

    int _life;
    std::string _name;
    Statistic *_statistic;
    ActorStateDirection *_state = new ActorStateDirection();

};

#endif // ACTOR_H
