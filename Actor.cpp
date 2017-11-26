//
// Created by karibukai on 20/11/17
//

#include "Actor.h"
#include "Key.h"

Actor::Actor(const char c) : Positionable(c) {}

Actor::Actor(const char c, Statistics *statistics) : Actor(c), stats(statistics) {}

void Actor::attack(Actor *actor) {
    actor->suby(this);
}

void Actor::suby(const Actor *actor) {
    suby(actor->getStatistics()->getAttack());
}

void Actor::suby(const int attack) {
    int damage = attack / stats->getDefense();
    stats->setLife(damage);
}

const Statistics *Actor::getStatistics() const {
    return stats;
}

void Actor::use(Item *item) {
    item->use(this);
}

void Actor::setDirection(const Actor::Direction direction) {
    this->direction = direction;
    setCharacter(direction);
}

const bool Actor::handleInputMove(Stage *pStage, const char input) {
    Vector *target = new Vector(getPosition());
    switch (input) {
        case Key::UP:
            return handleDirection(Direction::up, pStage, target->addY(1));
        case Key::DOWN:
            return handleDirection(Direction::down, pStage, target->addY(-1));
        case Key::LEFT:
            return handleDirection(Direction::left, pStage, target->addX(-1));
        case Key::RIGHT:
            return handleDirection(Direction::right, pStage, target->addX(1));
        default:
            return false;
    }
}

const bool Actor::handleDirection(const Actor::Direction direction, Stage *pStage, Vector *target) {
    if (this->direction == direction)
        return interactCase(pStage, target);
    setDirection(direction);
    return true;
}

const bool Actor::interactCase(Stage *pStage, Vector *pVector) {
    //todo:stairs
    if (pStage->canMove(pVector)) { // move
        pStage->move(this, pVector);
        return true;
    } else if (pStage->hasActor(pVector)) { // attack
        pStage->getActor(pVector)->suby(this);
        return true;
    }
    // stop: wall
    return false;
}

