#include <ActorHuman.h>
#include "Stage.h"
#include "VisitorDynamicUpdateStage.h"

Stage::Stage(Map *pMap, Vector *entry) : _map(pMap), _entry(entry) {}

Stage::~Stage() {}

void Stage::update() {
    for (auto actor: _actors)
        actor->accept(VisitorDynamicUpdateStage(this));
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

bool Stage::add(Dynamic *aDynamic, const Vector &vector) {
    if (_map->set(aDynamic, vector)) {
        _actors.push_back(aDynamic);
        return true;
    }
    return false;
}

void Stage::remove(Dynamic *aDynamic) {
    _map->removeContent(*aDynamic->getVector());
    for (auto iter = _actors.begin(); iter != _actors.end(); ++iter) {
        if (*iter == aDynamic) {
            _actors.erase(iter);
            break;
        }
    }
}

const Vector *Stage::entry() {
    return _entry;
}

bool Stage::addAtEntry(Dynamic *aDynamic) {
    return add(aDynamic, *entry());
}

