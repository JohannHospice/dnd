#ifndef BEHAVIORAGRESSIVE_H
#define BEHAVIORAGRESSIVE_H

#include <Behavior.h>


class BehaviorAgressive : public Behavior {
public:
    BehaviorAgressive();

    virtual ~BehaviorAgressive();

    void act(ActorMonster const &monster, Stage const &stage) override;

protected:

private:
};

#endif // BEHAVIORAGRESSIVE_H
