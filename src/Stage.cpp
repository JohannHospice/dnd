#include <CaseFloor.h>
#include <VisitorCaseMove.h>
#include "VisitorCaseRemove.h"

Stage::Stage() {}

Stage::~Stage() {}


const bool Stage::move(Dynamic *dynamic, Vector const &destination) {
    const Vector &source = *dynamic->getVector();
    if (inBound(source))
        getCase(source)->accept(*(new VisitorCaseRemove()));

    return set(dynamic, destination);
}

const bool Stage::set(Dynamic *pDynamic, const Vector &destination) {
    if (inBound(destination))
        return getCase(destination)->accept(*(new VisitorCaseMove(pDynamic)));
    return false;
}

void Stage::update() {
    for (auto actor: _actors)
        actor.update(this);
}

