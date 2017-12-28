#ifndef GAMERUNNER_H
#define GAMERUNNER_H

#include "GameEngine.h"

class GameRunner {
public:
    explicit GameRunner(GameEngine *engine);

    void start(GameState *state);

protected:

private:
    GameEngine *engine;
};

#endif // GAMERUNNER_H
