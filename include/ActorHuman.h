#ifndef HUMANACTOR_H
#define HUMANACTOR_H

#include "Actor.h"
#include "Inventory.h"

class ActorHuman : public Actor {
public:
    ActorHuman();

    ~ActorHuman() override;

    void update(Stage *stage) override;

protected:

private:
    Inventory m_inventory;
};

#endif // HUMANACTOR_H
