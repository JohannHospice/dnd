#ifndef STAGE_H
#define STAGE_H

#include "MapPiece.h"
#include "Dynamic.h"
#include "Actor.h"


class Stage {
public:
    Stage();

    virtual ~Stage();

    const bool move(Dynamic *dynamic, const Vector &destination);

    const bool set(Dynamic *pDynamic, const Vector &destination);

    void update();

    Map *getMap() const;

    void setMap(Map *map);

    const char *toString() const;

protected:
private:
    std::vector<Actor *> _actors;
    Map *_map;

    const bool set(Dynamic *pDynamic, Vector *destination);

    const bool move(Dynamic *dynamic, Vector *destination);
};

#endif // STAGE_H
