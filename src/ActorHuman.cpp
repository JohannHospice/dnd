#include "ActorHuman.h"
#include <VisitorDynamic.h>
#include <Stage.h>

void ActorHuman::update(Stage *stage) {
    for (auto event: _events) {
    }
//    stage->move(this, *new Vector(0,1));
}

const bool ActorHuman::addItem(Item *pItem) {
    return m_inventory->addItem(pItem);
}

const bool ActorHuman::accept(VisitorDynamic *pDynamic) {
    return pDynamic->visit(this);
}

ActorHuman::ActorHuman(const std::string &name, Statistic *statistic) : Actor(name, statistic) {
    m_inventory = new Inventory(DEFAULT_INVENTORY_SIZE);
}
