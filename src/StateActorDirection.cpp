#include "StateActorDirection.h"

StateActorDirection::StateActorDirection(Direction direction) {
    state = direction;
};

StateActorDirection::StateActorDirection() {
    state = DOWN;
}

const bool StateActorDirection::operator==(StateActorDirection const &b) const {
    return state == b.getState();
}

const Direction StateActorDirection::getState() const {
    return state;
}

void StateActorDirection::setState(Direction val) {
    state = val;
}
