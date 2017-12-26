#include "PlayMemento.h"

PlayMemento::~PlayMemento() {
    //dtor
}

PlayMemento::PlayMemento(Dungeon *dungeon, ActorHuman *actorHuman) {
    m_dungeon = dungeon;
    human = actorHuman;
}
