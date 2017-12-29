//
// Created by karibukai on 26/12/17.
//

#include "VisitorDynamicItem.h"

VisitorDynamicItem::VisitorDynamicItem(CapsuleItem *item) {
    _item = item;
}

const bool VisitorDynamicItem::visit(CapsuleItem *item) const {
    return false;
}

const bool VisitorDynamicItem::visit(ActorHuman *actorHuman) const {
    if (actorHuman->addItem(_item->take())) {
        _item->removeFromStage();
        return true;
    }
    return false;
}

const bool VisitorDynamicItem::visit(ActorMonster *actorMonster) const {
    return false;
}
