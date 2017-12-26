

#include <StateActorDirection.h>
#include <Actor.h>

void Actor::setDirection(const StateActorDirection::Direction direction) {
    actorState->setState(direction);
}

const StateActorDirection::Direction Actor::getDirection() const {
    return actorState->getState();
}

const char Actor::getChar() const {
    return actorState->getState();
}

const bool Actor::attack(Actor *pActor) {
    return pActor->hurt(this);
}

const bool Actor::hurt(Actor *a) {
    return hurt(a->getStatistic()->getAttack());
}

const bool Actor::hurt(int damage) {
    return statistic->setLife(statistic->getLife() - damage);
}

const bool Actor::heal(int life) {
    return statistic->addLife(life);
}

const Statistic *Actor::getStatistic() const {
    return statistic;
}
