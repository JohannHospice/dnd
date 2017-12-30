#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory {
public:
    explicit Inventory(int limit);

    virtual ~Inventory();

    const int getLimit() const {
        return _limit;
    }

    void setLimit(int val) {
        _limit = val;
    }

    const std::vector<Item *> getItems() const;

    const bool addItem(Item *pItem);

    Item *getItem(int i) const;

    unsigned long size() const;

    const int getSize() const;

protected:

private:
    std::vector<Item *> m_items;
    int _limit;
};

#endif // INVENTORY_H
