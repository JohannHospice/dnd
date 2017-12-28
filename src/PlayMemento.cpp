#include <MapBuilder.h>
#include <CaseStair.h>
#include <VisitorCaseMove.h>
#include "PlayMemento.h"
#include "FactoryStatistic.h"

PlayMemento::~PlayMemento() {
    //dtor
}

PlayMemento::PlayMemento(ActorHuman *actorHuman, std::vector<Stage *> stages, int i) {
    _actorHuman = actorHuman;
    _stages = stages;
    _activeStage = i;
}

ActorHuman *PlayMemento::getActorHuman() const {
    return _actorHuman;
}

void PlayMemento::setActorHuman(ActorHuman *_actorHuman) {
    PlayMemento::_actorHuman = _actorHuman;
}

const std::vector<Stage *> &PlayMemento::getStages() const {
    return _stages;
}

void PlayMemento::setStages(const std::vector<Stage *> &_stages) {
    PlayMemento::_stages = _stages;
}

int PlayMemento::getActiveStage() const {
    return _activeStage;
}

void PlayMemento::setActiveStage(int _activeStage) {
    PlayMemento::_activeStage = _activeStage;
}

PlayMemento *PlayMemento::newGame() {
    auto *human = new ActorHuman("human", FactoryStatistic::makeWarrior());
    std::vector<Stage *> stages;

    Map *map = (new MapBuilder())->setRoom(10, 10, 0, 0)->build();
    map->setCase(3, 6, new CaseStair(1));

    Vector position = *new Vector(6, 2);
    if (map->getCase(position)->accept(*new VisitorCaseMove(human)))
        human->setVector(position);
    auto *stage = new Stage();
    stage->setMap(map);
    stages.push_back(stage);

    return new PlayMemento(human, stages, 0);
}

