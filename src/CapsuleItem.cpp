#include "CapsuleItem.h"

#include "VisitorDynamic.h"

CapsuleItem::~CapsuleItem() {}

CapsuleItem::CapsuleItem(Stage *stage, Item *item) : Dynamic(stage) {
    _item = item;
}

const bool CapsuleItem::accept(const VisitorDynamic &visitor) {
    return visitor.visit(this);
}

const char CapsuleItem::getChar() const {
    return 'I';
}

Item *CapsuleItem::take() {
    removeFromStage();
    return _item;
}
