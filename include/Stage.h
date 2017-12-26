#ifndef STAGE_H
#define STAGE_H

#include "Case.h"

#include "Piece.h"
#include "Dynamic.h"
#include "CaseCarry.h"
#include "CaseWall.h"
#include "Actor.h"


class Stage : public Piece {
public:
    Stage();

    virtual ~Stage();

    const bool move(Dynamic *dynamic, const Vector &destination);

    const bool set(Dynamic *pDynamic, const Vector &destination);

    void update();

protected:
private:
    std::vector<Actor> _actors;
};

#endif // STAGE_H
