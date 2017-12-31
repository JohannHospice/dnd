#include <cstring>
#include "GameStatePlay.h"
#include "GameStateMenuPause.h"
#include "GameStateMenuOver.h"

GameStatePlay GameStatePlay::_self;

void GameStatePlay::create() {}

void GameStatePlay::dispose() {}

void GameStatePlay::pause() {}

void GameStatePlay::resume() {}

void GameStatePlay::render(GameEngine *game, TerminalOutput *output) {
    output->print(*getActiveStage()->getMap());
    output->print(getInfoStage());
    output->print(getInfo(_actorHuman));
}

Stage *GameStatePlay::getActiveStage() { return _stages.at(_activeStage); }

void GameStatePlay::handleEvent(GameEngine *game, TerminalInput *input) {
    int i = input->input();
    if (i == input->getEnter()) {
        GameStateMenuPause::instance()->setActorHuman(_actorHuman);
        game->pushState(GameStateMenuPause::instance());
    } else if (i == input->getUp())
        _actorHuman->moveUp(getActiveStage()->getMap());
    else if (i == input->getDown())
        _actorHuman->moveDown(getActiveStage()->getMap());
    else if (i == input->getRight())
        _actorHuman->moveRight(getActiveStage()->getMap());
    else if (i == input->getLeft())
        _actorHuman->moveLeft(getActiveStage()->getMap());
}


void GameStatePlay::update(GameEngine *game) {
    if (_win) {
        game->popState();
    } else if (_loose) {
        GameStateMenuOver::instance()->setMemento(_lastMemento);
        game->changeState(GameStateMenuOver::instance());
    } else {
        getActiveStage()->update();
    }
}

void GameStatePlay::gameOver() {
    _loose = true;
}

void GameStatePlay::gameWin() {
    _win = true;
}

PlayMemento *GameStatePlay::save() const {
    return new PlayMemento(_actorHuman, _stages, _activeStage);
}

void GameStatePlay::restore(PlayMemento *memento) {
    _actorHuman = memento->getActorHuman();
    _stages = memento->getStages();
    _activeStage = memento->getActiveStage();
    _lastMemento = memento;
}

const char *GameStatePlay::getInfoStage() const {
    auto *infoStage = new char[10];
    sprintf(infoStage, "stage: %d\n", _activeStage);
    return infoStage;
}


char *GameStatePlay::getInfo(Actor *actor) const {
    auto *stats = actor->getStatistic();
    auto v = actor->getVector();
    auto info = new char[50];
    auto infoV = new char[10];
    if (v == nullptr)
        sprintf(infoV, "null");
    else
        sprintf(infoV, "x: %d, y: %d", v->getX(), v->getY());
    sprintf(info, "(%s), (life: %d/%d, attack: %d, defense: %d,fieldView: %d\n", infoV,
            actor->getLife(), stats->getLife(), stats->getAttack(),
            stats->getDefense(), stats->getFieldView());
    return info;
}

void GameStatePlay::changeStage(const int stair) {
    getActiveStage()->remove(_actorHuman);
    setActiveStage(stair);
    getActiveStage()->add(_actorHuman, *getActiveStage()->entry());
}

void GameStatePlay::setActiveStage(const int stair) {
    _activeStage = stair;
}

