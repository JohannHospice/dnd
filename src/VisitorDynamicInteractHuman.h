//
// Created by karibukai on 29/12/17.
//

#ifndef DND_VISITORDYNAMICINTERACTHUMAN_H
#define DND_VISITORDYNAMICINTERACTHUMAN_H


#include <VisitorDynamic.h>
class ActorHuman;

class VisitorDynamicInteractHuman : public VisitorDynamic { ;
public:
    explicit VisitorDynamicInteractHuman(ActorHuman *human): _human(human){}

    const bool visit(Item *item) const override;

    const bool visit(ActorHuman *actorHuman) const override;

    const bool visit(ActorMonster *actorMonster) const override;

private:
    ActorHuman *_human;
};


#endif //DND_VISITORDYNAMICINTERACTHUMAN_H
