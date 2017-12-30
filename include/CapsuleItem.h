#ifndef ITEMCAPSULE_H
#define ITEMCAPSULE_H

#include "Actor.h"
#include "Dynamic.h"
#include "Item.h"

class CapsuleItem : public Dynamic {
public:
    explicit CapsuleItem(Item *item);

    virtual ~CapsuleItem();

    const char getChar() const override;

    const bool accept(const VisitorDynamic &visitor) override;

    const bool empty() const;

    Item *getItem() const;

    void setItem(Item *item);

private:
    Item *_item;

};

#endif // ITEMCAPSULE_H
