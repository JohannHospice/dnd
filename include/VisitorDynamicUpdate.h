//
// Created by karibukai on 28/12/17.
//

#ifndef DND_VISITORDYNAMICSTAGE_H
#define DND_VISITORDYNAMICSTAGE_H


#include <Stage.h>
#include "VisitorDynamic.h"

class Stage;

class VisitorDynamicUpdate : public VisitorDynamic {
public:
    explicit VisitorDynamicUpdate(Stage *pStage) : _stage(pStage) {};

    const bool visit(Item *item) const override;

    const bool visit(ActorHuman *actorHuman) const override;

    const bool visit(ActorMonster *actorMonster) const override;

private:
    Stage *_stage;
};


#endif //DND_VISITORDYNAMICSTAGE_H
