#include "CapsuleItem.h"

#include "VisitorDynamic.h"

CapsuleItem::~CapsuleItem() {}

CapsuleItem::CapsuleItem(Item *item) : _item(item) {}

const bool CapsuleItem::accept(const VisitorDynamic &visitor) {
    return visitor.visit(this);
}

const char CapsuleItem::getChar() const {
    return 'I';
}

const bool CapsuleItem::empty() const {
    return _item == nullptr;
}

Item *CapsuleItem::getItem() const {
    return _item;
}

void CapsuleItem::setItem(Item *item) {
    _item = item;
}
