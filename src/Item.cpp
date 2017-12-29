#include "Item.h"

#include "VisitorDynamic.h"

Item::~Item() {}

const bool Item::accept(const VisitorDynamic &visitor) {
    return visitor.visit(this);
}

const char Item::getChar() const {
    return 'I';
}

const bool Item::isActive() const {
    return _active;
}
void Item::setActive(bool active) {
    _active = active;
}
