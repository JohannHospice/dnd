#include <ActorHuman.h>
#include "Stage.h"
#include "VisitorDynamicStage.h"

Stage::Stage(Map *pMap) : _map(pMap) {}

Stage::~Stage() {}

void Stage::update() {
    for (auto actor: _actors) {
        actor->update(_map);
    }
    for (auto actor: _actors) {
        actor->accept(VisitorDynamicStage(this));
    }
}

bool Stage::addActor(Actor *actor, const Vector &vector) {
    if (_map->set(actor, vector)) {
        _actors.push_back(actor);
        return true;
    }
    return false;
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

void Stage::removeActor(Actor *actor) {
    _map->removeContent(*actor->getVector());
    for (std::vector<Actor *>::iterator iter = _actors.begin(); iter != _actors.end(); ++iter) {
        if (*iter == actor) {
            _actors.erase(iter);
            break;
        }
    }
    /*
    std::vector<Actor *>::iterator newEnd = std::remove(_actors.begin(), _actors.end(), actor);
    _actors.erase(newEnd, _actors.end());*/
}

