#ifndef MONSTERACTOR_H
#define MONSTERACTOR_H

#include "Item.h"
#include "Actor.h"

class Behavior;

class ActorMonster : public Actor {
public:
    ActorMonster(const std::string &name, Statistic *statistic, Item *item);
    ActorMonster(const std::string &name, Statistic *statistic);

    ~ActorMonster() override;

    Item *getItem() {
        return _item;
    }

    void setItem(Item *val) {
        _item = val;
    }

    void update(Stage *stage) override;

protected:

private:
    Item *_item;
    Behavior *_behavior;
};

#endif // MONSTERACTOR_H
