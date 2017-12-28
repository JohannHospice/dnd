
#ifndef DND_GAMESTATEPAUSE_H
#define DND_GAMESTATEPAUSE_H


#include <GameState.h>

class GameStatePause : public GameState {
public:
    void create() override;

    void dispose() override;

    void pause() override;

    void resume() override;

    void handleEvent(GameEngine *game, TerminalInput *input) override;

    void update(GameEngine *game) override;

    void render(GameEngine *game, TerminalOutput *pIO) override;

    static GameState *instance() { return &_self; };

private:
    static GameStatePause _self;
};


#endif //DND_GAMESTATEPAUSE_H
