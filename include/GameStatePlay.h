#ifndef DND_GAMESTATEPLAY_H
#define DND_GAMESTATEPLAY_H

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

    Stage *getActiveStage();

    const char *getInfoStage() const;

    char *getInfo(Actor *actor) const;

    void setActiveStage(const int stair);

    GameStatePlay() = default;

    static GameStatePlay _self;


    ActorHuman *_actorHuman = nullptr;

    std::vector<Stage *> _stages;

    int _activeStage;

    bool _win = false, _loose = false;

    PlayMemento *_lastMemento;
};

#endif // DND_GAMESTATEPLAY_H
