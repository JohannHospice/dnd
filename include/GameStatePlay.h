#ifndef STATEPLAY_H
#define STATEPLAY_H

#include "GameState.h"
#include "PlayMemento.h"
#include "ActorHuman.h"

class GameStatePlay : public GameState {
public:

    void create() override;

    void dispose() override;

    void pause() override;

    void resume() override;

    void handleEvent(GameEngine *game, TerminalInput *input) override;

    void update(GameEngine *game) override;

    void render(GameEngine *game, TerminalOutput *output) override;

    PlayMemento *save() const;

    void restore(PlayMemento *memento);

    static GameStatePlay *instance() {
        return &_self;
    }

    void gameOver();

    void gameWin();

    void changeStage(const int stair);

private:
    GameStatePlay() = default;

    static GameStatePlay _self;

    Stage *getActiveStage();

    const char *getInfoStage() const;

    char *getInfo(Actor *actor) const;

    ActorHuman *_actorHuman = nullptr;

    std::vector<Stage *> _stages;

    int _activeStage;

    bool _win = false, _loose = false;

    PlayMemento *_lastMemento;

    void setActiveStage(const int stair);
};

#endif // STATEPLAY_H
