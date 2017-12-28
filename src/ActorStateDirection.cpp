#include "ActorStateDirection.h"

ActorStateDirection::ActorStateDirection(ActorStateDirection::Direction direction) {
    _direction = direction;
};

ActorStateDirection::ActorStateDirection() {
    _direction = DOWN;
}

const bool ActorStateDirection::operator==(ActorStateDirection const &b) const {
    return _direction == b.getState();
}

const ActorStateDirection::Direction ActorStateDirection::getState() const {
    return _direction;
}

void ActorStateDirection::setState(Direction val) {
    _direction = val;
}
