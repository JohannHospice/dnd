#ifndef STAGE_H
#define STAGE_H

#include "MapPiece.h"
#include "Dynamic.h"
#include "Actor.h"
#include "ActorHuman.h"


class Stage {
public:
    Stage(Map *pMap, Vector *entry);

    virtual ~Stage();

    void update();

    Map *getMap() const;

    void setMap(Map *map);

    void remove(Dynamic *aDynamic);

    const char *toString() const;

    std::vector<Dynamic *> getActors() const { return _actors; }

    bool add(Dynamic *aDynamic, const Vector &vector);

    bool addAtEntry(Dynamic *aDynamic);

    const Vector *entry();

private:

    std::vector<Dynamic *> _actors;

    Map *_map;

    Vector *_entry;
};

#endif // STAGE_H
