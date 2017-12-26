//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORDYNAMICATTACK_H
#define DND_VISITORDYNAMICATTACK_H


#include <Actor.h>
#include <VisitorDynamic.h>

class VisitorDynamicAttack : public VisitorDynamic {
public:
    explicit VisitorDynamicAttack(Actor *pHuman);

    const bool visit(Item *item) const override;

    const bool visit(ActorHuman *actorHuman) const override;

    const bool visit(ActorMonster *actorMonster) const override;

private:
    Actor *_actor;
};


#endif //DND_VISITORDYNAMICATTACK_H
