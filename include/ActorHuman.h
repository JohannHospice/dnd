#ifndef HUMANACTOR_H
#define HUMANACTOR_H

#include "Actor.h"
#include "Inventory.h"
#include <vector>
#include "Action.h"
#include "EventDynamic.h"

class ActorHuman : public Actor {
public:
    ActorHuman();

    ~ActorHuman() override;

    void update(Stage *stage) override;


    const bool accept(VisitorDynamic *pDynamic) override;

    const bool addItem(Item *pItem);

protected:

private:
    Inventory *m_inventory;
};

#endif // HUMANACTOR_H
