#include "GameRunner.h"

GameRunner::GameRunner(GameEngine *engine)
{
    this->engine = engine;
}

GameRunner::~GameRunner()
{
    //dtor
}

void GameRunner::start(GameState *state) {
    engine->create();
    engine->changeState(state);
    while(engine->running()){
        engine->handleEvent();
        engine->update();
        engine->render();
    }
    engine->dispose();
}
