//
// Created by karibukai on 24/11/17.
//

#ifndef DND_INVENTORY_H
#define DND_INVENTORY_H


#include <vector>
#include "Item.h"

class Inventory : public Stringable {
    std::vector<Item> items;
public:
    unsigned long size() const;

    void addItem(Item *);

    Item getItem(const int i) const;
    Item removeItem(const int i);

    const std::string toString() const override;
};


#endif //DND_INVENTORY_H
