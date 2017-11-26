//
// Created by karibukai on 24/11/17.
//

#include "Inventory.h"

void Inventory::addItem(Item *item) {
    items.push_back(*item);
}

const std::string Inventory::toString() const {
    std::string str = "Inventory:\n";
    for (int i = 0; i < items.size(); ++i) {
        Item item = items.at(i);
        str += i + ": " + item.toString() + "\n";
    }
    return str;
}

Item Inventory::getItem(const int i) const {
    return items.at(i);
}

unsigned long Inventory::size() const {
    return items.size();
}
