#include "Stage.h"
#include "VisitorCaseMove.h"
#include "VisitorCaseRemove.h"

Stage::Stage() {}

Stage::~Stage() {}


const bool Stage::move(Dynamic *dynamic, Vector const &destination) {
    const Vector source = *dynamic->getVector();
    if (set(dynamic, destination)) {
        if (_map->inBound(source))
            _map->getCase(source)->accept(*(new VisitorCaseRemove()));
        return true;
    }
    return false;
}

const bool Stage::set(Dynamic *pDynamic, const Vector &destination) {
    if (_map->inBound(destination))
        if (_map->getCase(destination)->accept(*(new VisitorCaseMove(pDynamic)))) {
            pDynamic->setVector(destination);
            return true;
        }
    return false;
}

void Stage::update() {
    for (auto actor: _actors)
        actor->update(this);
}

void Stage::setMap(Map *map) {
    _map = map;
}

Map *Stage::getMap() const {
    return _map;
}

const char *Stage::toString() const {
    return _map->toString().c_str();
}

