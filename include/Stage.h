#ifndef STAGE_H
#define STAGE_H

#include "MapPiece.h"
#include "Dynamic.h"
#include "Actor.h"
#include "ActorHuman.h"


class Stage {
public:
    Stage(Map *pMap);

    virtual ~Stage();

    void update();

    Map *getMap() const;

    void setMap(Map *map);

    void removeActor(Actor *actor);

    const char *toString() const;

    bool addActor(Actor *actor, const Vector &vector);

    std::vector<Actor *> getActors() const { return _actors; }

private:
    std::vector<Actor *> _actors;

    Map *_map;
};

#endif // STAGE_H
