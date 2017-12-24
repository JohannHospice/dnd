#ifndef MONSTERACTOR_H
#define MONSTERACTOR_H

#include "Item.h"

class Behavior;

class ActorMonster
{
    public:
        ActorMonster();
        virtual ~ActorMonster();

        Item *Getitem() { return m_item; }
        void Setitem(Item *val) { m_item = val; }

    protected:

    private:
        Item *m_item;
        Behavior *behavior;
};

#endif // MONSTERACTOR_H
