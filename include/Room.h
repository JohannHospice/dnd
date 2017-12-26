//
// Created by karibukai on 25/12/17.
//

#ifndef DND_ROOM_H
#define DND_ROOM_H

#include <vector>
#include <stdexcept>
#include "Piece.h"
#include "CaseCarry.h"
#include "CaseWall.h"

class Room : public Piece {
public:
    void setSize(int sizeX, int sizeY, std::vector<Vector> open);

    void setOpen(Vector const &position);

    const bool onBorder(int x, int y) const;

    const bool inBoundOutBorder(int x, int y) const;
};


#endif //DND_ROOM_H
