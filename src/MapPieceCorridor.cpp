//
// Created by karibukai on 28/12/17.
//

#include <CaseFloor.h>
#include "MapPieceCorridor.h"

MapPieceCorridor::MapPieceCorridor(std::vector<Vector *> vectors, int originX, int originY) : MapPiece() {
    _originX = originX;
    _originY = originY;
    int sizeX = 0, sizeY = 0;
    for (auto v: vectors) {
        if (v->getX() > sizeX)
            sizeX = v->getX();
        if (v->getY() > sizeY)
            sizeY = v->getY();
    }
    init(sizeX, sizeY);

    for (auto v: vectors)
        setCase(v->getX(), v->getY(), new CaseFloor(CaseFloor::CORRIDOR));
}
