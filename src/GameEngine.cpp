#include <iostream>
#include <conio.h>
#include "GameEngine.h"
#include "GameState.h"

const int getEvent() {
    int input;
    do {
        input = getch();
    } while (input == 224 || input == 0);
    return input;
}

GameEngine::GameEngine() {}

GameEngine::~GameEngine() {}


void GameEngine::create() {
    m_running = true;
}

void GameEngine::dispose() {
    // cleanup the all states
    while (!states.empty()) {
        states.back()->dispose();
        states.pop_back();
    }
}

void GameEngine::changeState(GameState *state) {
    // cleanup the current state
    if (!states.empty()) {
        states.back()->dispose();
        states.pop_back();
    }

    // store and init the new state
    states.push_back(state);
    states.back()->create();
}

void GameEngine::pushState(GameState *state) {
    // pause current state
    if (!states.empty()) {
        states.back()->pause();
    }

    // store and init the new state
    states.push_back(state);
    states.back()->create();
}

void GameEngine::popState() {
    // cleanup the current state
    if (!states.empty()) {
        states.back()->dispose();
        states.pop_back();
    }

    // resume previous state
    if (!states.empty()) {
        states.back()->resume();
    }
}

void GameEngine::handleEvent() {
    // let the state handle events
    states.back()->handleEvent(this, getEvent());
}

void GameEngine::update() {
    // let the state update the game
    states.back()->update(this);
}

void GameEngine::render() {
    // clear screen
    system("cls");
    // let the state draw the screen
    states.back()->render(this);
}
