#include "Inventory.h"

Inventory::Inventory(const int limit) {
    _limit = limit;
}

Inventory::~Inventory() = default;

const bool Inventory::addItem(Item *pItem) {
    if (m_items.size() >= _limit)
        return false;
    m_items.push_back(pItem);
    return true;
}

unsigned long Inventory::size() const {
    return m_items.size();
}

Item *Inventory::getItem(int i) const {
    return m_items.at(i);
}

const std::vector<Item *> Inventory::getItems() const {
    return m_items;
}
