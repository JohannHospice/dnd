#include <Actor.h>
#include "Map.h"

Actor::Actor(const std::string &name, Statistic *statistic) : _name(name), _statistic(statistic) {
    _state = new ActorStateDirection();
    _life = statistic->getLife();
}

const ActorStateDirection::Direction Actor::getDirection() const {
    return _state->getState();
}

const char Actor::getChar() const {
    return _state->getState();
}

const int Actor::getLife() const {
    return _life;
}

const bool Actor::attack(Actor *pActor) {
    return pActor->hurt(this);
}

const bool Actor::hurt(Actor *a) {
    return hurt(a->getStatistic()->getAttack());
}

const bool Actor::hurt(int damage) {
    _life -= damage;
    if (_life < 0)
        _life = 0;
    return true;
}

const bool Actor::heal(int life) {
    _life += life;
    if (_life > _statistic->getLife())
        _life = _statistic->getLife();
    return true;
}

const Statistic *Actor::getStatistic() const {
    return _statistic;
}

const bool Actor::changeState(ActorStateDirection::Direction e) {
    if (_state->getState() == e)
        return false;
    _state->setState(e);
    return true;
}

bool Actor::moveUp(Map *map) {
    if (!changeState(ActorStateDirection::UP))
        return map->move(this, *getVector() + *Vector::down());
    return true;
}

bool Actor::moveDown(Map *map) {
    if (!changeState(ActorStateDirection::DOWN))
        return map->move(this, *getVector() + *Vector::up());
    return true;
}

bool Actor::moveLeft(Map *map) {
    if (!changeState(ActorStateDirection::LEFT))
        return map->move(this, *getVector() + *Vector::left());
    return true;
}

bool Actor::moveRight(Map *map) {
    if (!changeState(ActorStateDirection::RIGHT))
        return map->move(this, *getVector() + *Vector::right());
    return true;
}

const bool Actor::isAlive() const {
    return _life > 0;
}

