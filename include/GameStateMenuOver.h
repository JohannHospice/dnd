#ifndef DND_GAMESTATEMENUOVER_H
#define DND_GAMESTATEMENUOVER_H

#include "../GameStateMenu.h"

class PlayMemento;

class GameStateMenuOver : public GameStateMenu {
public:
    void setMemento(PlayMemento *memento);

    void create() override;

    void dispose() override;

    void pause() override;

    void update(GameEngine *game) override;

    static GameStateMenuOver *instance() {
        return &_self;
    }

private:
    void chooseOption(GameEngine *pEngine) const override;

private:
    static GameStateMenuOver _self;
    PlayMemento *_memento{};
};


#endif //DND_GAMESTATEMENUOVER_H
