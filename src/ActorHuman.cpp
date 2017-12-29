#include "ActorHuman.h"
#include <VisitorDynamic.h>
#include <Map.h>

void ActorHuman::update(Map *map) {
    for (auto event: _events) {
    }
//    stage->move(this, *new Vector(0,1));
}

const bool ActorHuman::addItem(Item *pItem) {
    return m_inventory->addItem(pItem);
}

const bool ActorHuman::accept(const VisitorDynamic &pDynamic) {
    return pDynamic.visit(this);
}

ActorHuman::ActorHuman(const std::string &name, Statistic *statistic) : Actor(name, statistic) {
    m_inventory = new Inventory(DEFAULT_INVENTORY_SIZE);
}

