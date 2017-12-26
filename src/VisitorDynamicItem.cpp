//
// Created by karibukai on 26/12/17.
//

#include "VisitorDynamicItem.h"
#include "EventDynamicDisapear.h"

VisitorDynamicItem::VisitorDynamicItem(Item *item) {
    _item = item;
}

const bool VisitorDynamicItem::visit(Item *item) const {
    return false;
}

const bool VisitorDynamicItem::visit(ActorHuman *actorHuman) const {
    if (actorHuman->addItem(_item)) {
        _item->addEvent(new EventDynamicDisapear());
        return true;
    }
    return false;
}

const bool VisitorDynamicItem::visit(ActorMonster *actorMonster) const {
    return false;
}
