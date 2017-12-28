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

    virtual void handleEvent(GameEngine *game, TerminalInput *input) = 0;

    virtual void update(GameEngine *game) = 0;

    virtual void render(GameEngine *game, TerminalOutput *pIO) = 0;

protected:
    GameState() {}

private:
};

#endif // GAMELISTENER_H
