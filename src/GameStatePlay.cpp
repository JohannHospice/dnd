#include "GameStatePlay.h"
#include "GameStatePause.h"

GameStatePlay GameStatePlay::_self;

void GameStatePlay::create() {

}

void GameStatePlay::dispose() {

}

void GameStatePlay::pause() {

}

void GameStatePlay::resume() {

}

void GameStatePlay::render(GameEngine *game, TerminalOutput *output) {
    output->print(*getActiveStage()->getMap());
}

Stage *GameStatePlay::getActiveStage() { return _stages.at(_activeStage); }

void GameStatePlay::handleEvent(GameEngine *game, TerminalInput *input) {
    int i = input->input();
    if (i == input->getEnter())
        game->changeState(GameStatePause::instance());
    else if (i == input->getExit())
        game->popState();
    else {
        // todo replace by _events
        Vector *position = _actorHuman->getVector()->copy();
        bool ok = false;
        if (i == input->getUp()) {
            if (!_actorHuman->changeState(ActorStateDirection::UP)) {
                position->addY(1);
                ok = true;
            }
        } else if (i == input->getDown()) {
            if (!_actorHuman->changeState(ActorStateDirection::DOWN)) {
                position->addY(-1);
                ok = true;
            }
        } else if (i == input->getRight()) {
            if (!_actorHuman->changeState(ActorStateDirection::RIGHT)) {
                position->addX(1);
                ok = true;
            }
        } else if (i == input->getLeft()) {
            if (!_actorHuman->changeState(ActorStateDirection::LEFT)) {
                position->addX(-1);
                ok = true;
            }
        }
        if (ok)
            getActiveStage()->move(_actorHuman, *position);
    }
}

void GameStatePlay::update(GameEngine *game) {
    _stages.at(_activeStage)->update();
}

PlayMemento *GameStatePlay::save() const {
    return new PlayMemento(_actorHuman, _stages, _activeStage);
}

void GameStatePlay::restore(PlayMemento *memento) {
    _actorHuman = memento->getActorHuman();
    _stages = memento->getStages();
    _activeStage = memento->getActiveStage();
}

