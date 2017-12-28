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

protected:

private:
    GameStatePlay() = default;

    static GameStatePlay _self;

    ActorHuman *_actorHuman = nullptr;

    std::vector<Stage *> _stages;

    int _activeStage;

    Stage *getActiveStage();

    Vector *add(const Vector &pVector, const Vector &position);
};

#endif // STATEPLAY_H
