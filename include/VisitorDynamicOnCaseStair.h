//
// Created by karibukai on 26/12/17.
//

#ifndef DND_VISITORDYNAMICSTAIR_H
#define DND_VISITORDYNAMICSTAIR_H


#include <CaseStair.h>
#include <VisitorDynamic.h>

class VisitorDynamicOnCaseStair : public VisitorDynamic {
public:
    explicit VisitorDynamicOnCaseStair(CaseStair *pStair);

    const bool visit(Item *item) const override;

    const bool visit(ActorHuman *actorHuman) const override;

    const bool visit(ActorMonster *actorMonster) const override;

private:
    CaseStair *_stair;

    const bool visitByDynamic(Dynamic *aDynamic) const;
};


#endif //DND_VISITORDYNAMICSTAIR_H
