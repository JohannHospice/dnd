#ifndef STATEPLAY_H
#define STATEPLAY_H

#include "Dungeon.h"
#include "GameState.h"
#include "PlayMemento.h"
#include "ActorHuman.h"

class StatePlay : public GameState {
public:

    void create() override;

    void dispose() override;

    void pause() override;

    void resume() override;

    void handleEvent(GameEngine *game, int event) override;

    void update(GameEngine *game) override;

    void render(GameEngine *game) override;

    PlayMemento *save() const;

    void restore(const PlayMemento &memento);

    static StatePlay *instance() {
        return &_self;
    }

protected:

private:
    StatePlay() = default;

    static StatePlay _self;

    ActorHuman *_actorHuman = nullptr;

    std::vector<Stage *> _stages;

    int _activeStage;
};

#endif // STATEPLAY_H
