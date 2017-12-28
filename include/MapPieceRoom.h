//
// Created by karibukai on 25/12/17.
//

#ifndef DND_ROOM_H
#define DND_ROOM_H

#include <vector>
#include <stdexcept>
#include "MapPiece.h"
#include "CaseCarry.h"
#include "CaseWall.h"

class MapPieceRoom : public MapPiece {
public:
    MapPieceRoom(int sizeX, int sizeY, int originX, int originY);

    void setSize(int sizeX, int sizeY);

    void setOpen(Vector const &position);

    const bool onBorder(int x, int y) const;

    const bool inBoundOutBorder(int x, int y) const;
};


#endif //DND_ROOM_H
