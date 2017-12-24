#include "GameRunner.h"

GameRunner::GameRunner(GameEngine *engine) {
    this->engine = engine;
}

void GameRunner::start(GameState *state) {
    engine->create();
    engine->changeState(state);
    while (engine->running()) {
        engine->update();
        engine->render();
        engine->handleEvent();
    }
    engine->dispose();
}
