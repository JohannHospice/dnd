#ifndef BEHAVIORAGRESSIVE_H
#define BEHAVIORAGRESSIVE_H

#include <Behavior.h>


class BehaviorAgressive : public Behavior {
public:
    BehaviorAgressive();

    virtual ~BehaviorAgressive();

    void act(ActorMonster *monster, Map *map) override;

protected:

private:
};

#endif // BEHAVIORAGRESSIVE_H
