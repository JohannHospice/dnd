//
// Created by karibukai on 28/12/17.
//

#include "FactoryItem.h"
#include "ItemPotion.h"

FactoryItem::FactoryItem() {

}

Item *FactoryItem::makePotion() {
    return new ItemPotion(20);
}
