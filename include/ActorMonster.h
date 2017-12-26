#ifndef MONSTERACTOR_H
#define MONSTERACTOR_H

#include "Item.h"
#include "Actor.h"

class Behavior;

class ActorMonster : public Actor {
public:
    ActorMonster();

    ~ActorMonster() override;

    Item *getItem() {
        return m_item;
    }

    void setItem(Item *val) {
        m_item = val;
    }

    void update(Stage *stage) override;

protected:

private:
    Item *m_item;
    Behavior *m_behavior;
};

#endif // MONSTERACTOR_H
