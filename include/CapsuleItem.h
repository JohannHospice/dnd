#ifndef ITEMCAPSULE_H
#define ITEMCAPSULE_H

#include "Actor.h"
#include "Dynamic.h"
#include "Item.h"

class CapsuleItem : public Dynamic {
public:
    CapsuleItem(Stage *stage, Item *item);

    virtual ~CapsuleItem();

    const char getChar() const override;

    const bool accept(const VisitorDynamic &visitor) override;

    Item *take();

private:
    Item *_item;
};

#endif // ITEMCAPSULE_H
