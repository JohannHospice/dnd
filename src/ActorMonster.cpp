#include "ActorMonster.h"
#include "Behavior.h"

ActorMonster::ActorMonster() {
    //ctor
}

ActorMonster::~ActorMonster() {
    //dtor
}

void ActorMonster::update(Stage *stage) {
    m_behavior->act(*this, *stage);
}
