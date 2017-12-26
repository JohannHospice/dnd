#include "StatePlay.h"
#include "keys.h"

StatePlay StatePlay::_self;


void StatePlay::create() {

}

void StatePlay::dispose() {
}

void StatePlay::pause() {

}

void StatePlay::resume() {

}

void StatePlay::render(GameEngine *game) {

    _stages.at(_activeStage)->update();
}

void StatePlay::handleEvent(GameEngine *game, int event) {
    switch (event) {
        case KEY_UP:
            break;
        case KEY_DOWN:
            break;
        case KEY_ENTER:
            //  game->changeState(StatePause::instance())
            break;
        case KEY_ESC:
            game->popState();
            break;
    }

}

void StatePlay::update(GameEngine *game) {

}

PlayMemento *StatePlay::save() const {
    return new PlayMemento(_dungeon, _actorHuman);
}

void StatePlay::restore(const PlayMemento &memento) {
    _dungeon = memento.getDungeon();
    _actorHuman = memento.getHuman();
}
