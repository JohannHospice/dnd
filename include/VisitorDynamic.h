//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORDYNAMIC_H
#define DND_VISITORDYNAMIC_H

#include "CapsuleItem.h"
#include "ActorHuman.h"
#include "ActorMonster.h"

class VisitorDynamic {
public:
    virtual const bool visit(CapsuleItem *item) const = 0;

    virtual const bool visit(ActorHuman *actorHuman) const = 0;

    virtual const bool visit(ActorMonster *actorMonster) const = 0;
};

#endif //DND_VISITORDYNAMIC_H
