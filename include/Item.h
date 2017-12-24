#ifndef ITEM_H
#define ITEM_H

#include "Actor.h"
#include "Dynamic.h"

class Item : public Dynamic {
public:
    virtual ~Item();

    virtual void use(Actor *actor)=0;

    virtual Item *clone() const = 0;

protected:

private:
};

#endif // ITEM_H
