#include <Actor.h>

Actor::Actor(const std::string &name, Statistic *statistic) : _name(name), _statistic(statistic) {
    _state = new ActorStateDirection();
}

void Actor::setDirection(const ActorStateDirection::Direction direction) {
    _state->setState(direction);
}

const ActorStateDirection::Direction Actor::getDirection() const {
    return _state->getState();
}

const char Actor::getChar() const {
    return _state->getState();
}

const bool Actor::attack(Actor *pActor) {
    return pActor->hurt(this);
}

const bool Actor::hurt(Actor *a) {
    return hurt(a->getStatistic()->getAttack());
}

const bool Actor::hurt(int damage) {
    return _statistic->setLife(_statistic->getLife() - damage);
}

const bool Actor::heal(int life) {
    return _statistic->addLife(life);
}

const Statistic *Actor::getStatistic() const {
    return _statistic;
}

const bool Actor::changeState(const ActorStateDirection *e) {
    if (_state == e)
        return false;
    _state->setState(e->getState());
    return true;
}
