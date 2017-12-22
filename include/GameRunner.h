#ifndef GAMERUNNER_H
#define GAMERUNNER_H

#include "GameEngine.h"
class GameRunner
{
    public:
        GameRunner(GameEngine *engine);
        virtual ~GameRunner();

        void run(GameState *state);
    protected:

    private:
        GameEngine *engine;
};

#endif // GAMERUNNER_H
