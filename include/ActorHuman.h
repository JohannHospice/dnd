#ifndef HUMANACTOR_H
#define HUMANACTOR_H

#include <vector>
#include "Actor.h"
#include "Inventory.h"

#define DEFAULT_INVENTORY_SIZE 10

class ActorHuman : public Actor {
public:
    ActorHuman(const std::string &name, Statistic *statistic);

    void update(Map *map) override;

    const bool accept(const VisitorDynamic &pDynamic) override;

    const bool addItem(Item *pItem);

    void use(Item *item);

protected:

private:
    Inventory *m_inventory;
};

#endif // HUMANACTOR_H
