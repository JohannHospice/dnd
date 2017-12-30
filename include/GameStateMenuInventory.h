#ifndef DND_GAMESTATEMENUINVENTORY_H
#define DND_GAMESTATEMENUINVENTORY_H

#include <GameStateMenu.h>
#include <ActorHuman.h>

class GameStateMenuInventory : public GameStateMenu {
public:
    void create() override;

    void chooseOption(GameEngine *pEngine) const override;

    void setActorHuman(ActorHuman *actorHuman);

    static GameStateMenuInventory *instance() { return &_self; };
private:

    static GameStateMenuInventory _self;
    ActorHuman *_actorHuman{};
};


#endif //DND_GAMESTATEMENUINVENTORY_H
