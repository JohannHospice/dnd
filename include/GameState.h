#ifndef GAMELISTENER_H
#define GAMELISTENER_H

#include "GameEngine.h"

class GameState {
public:
    virtual ~GameState();

    virtual void create() = 0;

    virtual void dispose() = 0;

    virtual void pause() = 0;

    virtual void resume() = 0;

    virtual void handleEvent(GameEngine *game, int event) = 0;

    virtual void update(GameEngine *game) = 0;

    virtual void render(GameEngine *game) = 0;

    void changeState(GameEngine *game, GameState *state) {
        game->changeState(state);
    }

protected:
    GameState() {}

private:
};

#endif // GAMELISTENER_H
