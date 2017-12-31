#include <MapBuilder.h>
#include <VisitorCaseMove.h>
#include <BehaviorRandom.h>
#include "PlayMemento.h"
#include "FactoryStatistic.h"
#include "FactoryItem.h"
#include "Spawner.h"

PlayMemento::~PlayMemento() {}

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
    auto *builder = new MapBuilder();
    // generator
    auto *human = new ActorHuman("human", FactoryStatistic::makeKnight());
    ActorMonster monster = ActorMonster(
            "deprived",
            FactoryStatistic::makeDeprived(),
            FactoryItem::makePotion(),
            new BehaviorRandom());
    Spawner *spawner = new Spawner(monster);

    // stage 0 generation
    const Vector corridor0[3] = {Vector(0, 0), Vector(0, 1), Vector(0, 2)};
    auto *stage0 = new Stage(builder
                                     ->addRoom(10, 10, 0, 0)
                                     ->addRoom(5, 5, 3, 13)
                                     ->addRoom(8, 8, 18, 7)
                                     ->addCorridor(5, 10, corridor0, 3)// use corridorBuilder
                                     ->setCaseStair(0, 3, 6, 1)
                                     ->setCaseFloor(0, 5, 9)
                                     ->setCaseFloor(1, 2, 0)
                                     ->setCaseFloor(1, 4, 2)
                                     ->build(), new Vector(1, 1));

    for (const auto &v: {Vector(4, 4), Vector(6, 5), Vector(2, 8), Vector(8, 3), Vector(5, 7), Vector(20, 9),
                         Vector(2, 4)})
        stage0->add(spawner->spawn(), v);
    stage0->addAtEntry(human);

    // stage 1 generation
    const Vector corridor1[3] = {Vector(1, 0), Vector(2, 0), Vector(3, 0)};
    auto *stage1 = new Stage(builder
                                     ->addRoom(6, 6, 3, 3)
                                     ->addRoom(5, 5, 3, 9)
                                     ->addCorridor(5, 10, corridor1, 3)// use corridorBuilder
                                     ->setCaseStair(0, 4, 4, 0)
                                     ->setCaseFloor(0, 5, 2)
                                     ->setCaseFloor(0, 0, 0)
                                     ->setCaseFloor(1, 0, 0)
                                     ->build(), new Vector(11, 11));
    /*
    for (const auto &v: {Vector(4, 4), Vector(6, 5), Vector(2, 8), Vector(8, 3), Vector(5, 7), Vector(20, 9),
                         Vector(2, 4)})
        stage1->add(spawner->spawn(), v);
*/
    //adding stages
    std::vector<Stage *> stages;
    stages.push_back(stage0);
    stages.push_back(stage1);
    return new PlayMemento(human, stages, 0);
}

