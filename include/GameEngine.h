#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <vector>
#include "Terminal.h"

class GameState;

class GameEngine {
public:
    explicit GameEngine(Terminal *io);

    virtual ~GameEngine();

    void changeState(GameState *state);

    void pushState(GameState *state);

    void popState();

    void create();

    void dispose();

    void handleEvent();

    void update();

    void render();

    const bool running() const {
        return _running;
    }

    void quit() {
        _running = false;
    }

private:
    std::vector<GameState *> _gameStates;
    bool _running;
    Terminal *_io;
};

#endif // GAMEENGINE_H
