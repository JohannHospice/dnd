#ifndef HUMANACTOR_H
#define HUMANACTOR_H

#include <Actor.h>
#include "Inventory.h"

class ActorHuman : public Actor
{
    public:
        ActorHuman();
        virtual ~ActorHuman();

        Inventory Getinventory() { return m_inventory; }
        void Setinventory(Inventory val) { m_inventory = val; }

    protected:

    private:
        Inventory m_inventory;
};

#endif // HUMANACTOR_H
