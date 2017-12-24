#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

class Inventory {
public:
    Inventory();

    virtual ~Inventory();

    Item **Getitems() {
        return m_items;
    }

    void Setitem(Item **val) {
        m_items = val;
    }

    int Getlimit() {
        return limit;
    }

    void Setlimit(int val) {
        limit = val;
    }

protected:

private:
    Item **m_items;
    int limit;
};

#endif // INVENTORY_H
