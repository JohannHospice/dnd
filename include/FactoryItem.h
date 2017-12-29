//
// Created by karibukai on 28/12/17.
//

#ifndef DND_FACTORYITEM_H
#define DND_FACTORYITEM_H


#include <Item.h>

class FactoryItem {

public:
    FactoryItem();

    static Item *makePotion();
};


#endif //DND_FACTORYITEM_H
