#include <MapBuilder.h>
#include <VisitorCaseMove.h>
#include <BehaviorRandom.h>
#include "PlayMemento.h"
#include "FactoryStatistic.h"
#include "FactoryItem.h"

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
    auto *human = new ActorHuman("human", FactoryStatistic::makeSorcerer());
    auto *builder = new MapBuilder();

    Map *map = builder
            ->addRoom(10, 10, 0, 0)
            ->addRoom(5, 5, 3, 13)
            ->addRoom(8, 8, 18, 7)
            ->setCaseStair(0, 3, 6, 1)
            ->build();

    auto *stage = new Stage(map);
    stage->addActor(human, Vector(1, 1));
    stage->addActor(new ActorMonster("deprived", FactoryStatistic::makeWarrior(), FactoryItem::makePotion(), new BehaviorRandom()), Vector(4, 4));
    stage->addActor(new ActorMonster("deprived", FactoryStatistic::makeKnight(), FactoryItem::makePotion(), new BehaviorRandom()), Vector(6, 5));
    stage->addActor(new ActorMonster("deprived", FactoryStatistic::makeSorcerer(), FactoryItem::makePotion(), new BehaviorRandom()), Vector(2, 8));
    stage->addActor(new ActorMonster("deprived", FactoryStatistic::makeThief(), FactoryItem::makePotion(), new BehaviorRandom()), Vector(8, 3));
    stage->addActor(new ActorMonster("deprived", FactoryStatistic::makeDeprived(), FactoryItem::makePotion(), new BehaviorRandom()), Vector(5, 7));

    std::vector<Stage *> stages;
    stages.push_back(stage);
    return new PlayMemento(human, stages, 0);
}

