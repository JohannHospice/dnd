#include "Item.h"

#include "VisitorDynamic.h"

Item::~Item() {}

const bool Item::accept(const VisitorDynamic &visitor) {
    return visitor.visit(this);
}

const char Item::getChar() const {
    return 'I';
}
