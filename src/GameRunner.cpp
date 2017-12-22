#include "GameRunner.h"

GameRunner::GameRunner(GameEngine *engine)
{
    this->engine = engine;
}

GameRunner::~GameRunner()
{
    //dtor
}

void run(GameState *state) {
    engine->create();
    engine->changeState(state);
    while(engine->running()){
        engine->handleEvents();
        engine->update();
        engine->render();
    }
    engine->dispose();
}
