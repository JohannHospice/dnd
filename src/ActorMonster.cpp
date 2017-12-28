#include "ActorMonster.h"
#include "Behavior.h"

ActorMonster::~ActorMonster() {
    //dtor
}

void ActorMonster::update(Stage *stage) {
    _behavior->act(*this, *stage);
}

ActorMonster::ActorMonster(const std::string &name, Statistic *statistic) : Actor(name, statistic) {}

ActorMonster::ActorMonster(const std::string &name, Statistic *statistic, Item *item) : Actor(name, statistic) {
    _item = item;
}
