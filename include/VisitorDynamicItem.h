//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORDYNAMICITEM_H
#define DND_VISITORDYNAMICITEM_H


#include <VisitorDynamic.h>

class VisitorDynamicItem : public VisitorDynamic {
public:
    explicit VisitorDynamicItem(CapsuleItem *item);

    const bool visit(CapsuleItem *item) const override;

    const bool visit(ActorHuman *actorHuman) const override;

    const bool visit(ActorMonster *actorMonster) const override;

private:
    CapsuleItem *_item;
};


#endif //DND_VISITORDYNAMICITEM_H
