#include "ActorHuman.h"
#include <VisitorDynamic.h>

ActorHuman::ActorHuman() {
    m_inventory = new Inventory(10);
}

ActorHuman::~ActorHuman() {
    //dtor
}

void ActorHuman::update(Stage *stage) {
    for (auto event: events) {

    }
}

const bool ActorHuman::addItem(Item *pItem) {
    return m_inventory->addItem(pItem);

}


const bool ActorHuman::accept(VisitorDynamic *pDynamic) {
    return pDynamic->visit(this);
}
