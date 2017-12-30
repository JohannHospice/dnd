#include "GameEngine.h"
#include "GameState.h"

GameEngine::GameEngine(Terminal *io) { _io = io; }

GameEngine::~GameEngine() {}


void GameEngine::create() {
    _io->init();
    _running = true;
}

void GameEngine::dispose() {
    // cleanup the all _gameStates
    while (!_gameStates.empty()) {
        _gameStates.back()->dispose();
        _gameStates.pop_back();
    }
    _io->close();
}

void GameEngine::changeState(GameState *state) {
    // cleanup the current _direction
    if (!_gameStates.empty()) {
        _gameStates.back()->dispose();
        _gameStates.pop_back();
    }

    // store and init the new _direction
    _gameStates.push_back(state);
    _gameStates.back()->create();
}

void GameEngine::pushState(GameState *state) {
    // pause current _direction
    if (!_gameStates.empty()) {
        _gameStates.back()->pause();
    }

    // store and init the new _direction
    _gameStates.push_back(state);
    _gameStates.back()->create();
}

void GameEngine::popState() {
    // cleanup the current _direction
    if (!_gameStates.empty()) {
        _gameStates.back()->dispose();
        _gameStates.pop_back();
    }

    // resume previous _direction
    if (!_gameStates.empty()) {
        _gameStates.back()->resume();
    }
}

void GameEngine::handleEvent() {
    // let the _direction handle _events
    _gameStates.back()->handleEvent(this, _io->getInput());
}

void GameEngine::update() {
    // let the _direction update the game
    _gameStates.back()->update(this);
}

void GameEngine::render() {
    TerminalOutput *o = _io->getOutput();
    // clear screen
    o->clear();
    // let the _direction draw the screen
    _gameStates.back()->render(this, o);
}

void GameEngine::popStateUntil(GameState *state) {
    while (_gameStates.back() != state)
        popState();
}
