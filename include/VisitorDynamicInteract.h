//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORDYNAMICINTERRACT_H
#define DND_VISITORDYNAMICINTERRACT_H

#include <VisitorDynamic.h>

class VisitorDynamicInteract : public VisitorDynamic {
public:
    explicit VisitorDynamicInteract(Dynamic *pDynamic);

    const bool visit(CapsuleItem *item) const override;

    const bool visit(ActorHuman *actorHuman) const override;

    const bool visit(ActorMonster *actorMonster) const override;

private:
    Dynamic *_dynamic;
};


#endif //DND_VISITORDYNAMICINTERRACT_H
