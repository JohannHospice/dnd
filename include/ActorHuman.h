#ifndef HUMANACTOR_H
#define HUMANACTOR_H

#include <vector>
#include "Actor.h"
#include "Inventory.h"
#include "Action.h"
#include "EventDynamic.h"

#define DEFAULT_INVENTORY_SIZE 10

class ActorHuman : public Actor {
public:
    ActorHuman(const std::string &name, Statistic *statistic);

    void update(Map *map) override;

    const bool accept(const VisitorDynamic &pDynamic) override;

    const bool addItem(Item *pItem);

protected:

private:
    Inventory *m_inventory;
};

#endif // HUMANACTOR_H
