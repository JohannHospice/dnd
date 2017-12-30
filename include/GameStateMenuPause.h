#ifndef DND_GAMESTATEMENUPAUSE_H
#define DND_GAMESTATEMENUPAUSE_H

#include "GameStateMenu.h"
#include "ActorHuman.h"

class GameStateMenuPause : public GameStateMenu {
public:
    void create() override;

    void chooseOption(GameEngine *pEngine) const override;

    void setActorHuman(ActorHuman *actorHuman);

    static GameStateMenuPause *instance() { return &_self; };
private:
    static GameStateMenuPause _self;
    ActorHuman *_actorHuman{};
};


#endif //DND_GAMESTATEMENUPAUSE_H
