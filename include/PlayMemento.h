#ifndef PLAYMEMENTO_H
#define PLAYMEMENTO_H


#include "vector"
#include "ActorHuman.h"
#include "Stage.h"

class PlayMemento {
public:
    PlayMemento(ActorHuman *dungeon, std::vector<Stage *>, int i);

    virtual ~PlayMemento();

    ActorHuman *getActorHuman() const;

    void setActorHuman(ActorHuman *_actorHuman);

    const std::vector<Stage *> &getStages() const;

    void setStages(const std::vector<Stage *> &_stages);

    int getActiveStage() const;

    void setActiveStage(int _activeStage);

    static PlayMemento *newGame();

private:
    ActorHuman *_actorHuman;
    std::vector<Stage *> _stages;
    int _activeStage;
};

#endif // PLAYMEMENTO_H
