#include "ActorMonster.h"
#include "Behavior.h"
#include "VisitorDynamic.h"

ActorMonster::~ActorMonster() {
    //dtor
}

void ActorMonster::update(Map *map) {
    _behavior->act(this, map);
}

ActorMonster::ActorMonster(const std::string &name, Statistic *statistic) : Actor(name, statistic) {}

ActorMonster::ActorMonster(const std::string &name, Statistic *statistic, Item *item) : Actor(name, statistic) {
    _item = item;
}

ActorMonster::ActorMonster(const std::string &name, Statistic *statistic, Item *item, Behavior *behavior)
        : ActorMonster(name, statistic, item) {
    _behavior = behavior;
}

const bool ActorMonster::accept(const VisitorDynamic &visitor) {
    return visitor.visit(this);
}

const bool ActorMonster::hasItem() const {
    return _item != nullptr;
}

ActorMonster *ActorMonster::clone() const {
    return new ActorMonster(_name, _statistic, _item, _behavior);
}
