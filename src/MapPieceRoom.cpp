#include <CaseFloor.h>
#include "MapPieceRoom.h"

MapPieceRoom::MapPieceRoom(int sizeX, int sizeY, int originX, int originY) : MapPiece(sizeX, sizeY, originX, originY) {
    setSize(sizeX, sizeY);
}

void MapPieceRoom::setOpen(Vector const &position) {
    if (!onBorder(position.getX(), position.getY()))
        throw std::invalid_argument("position not on border");
    _cases[position.getY()][position.getX()] = new CaseFloor(CaseFloor::ROOM);
}

const bool MapPieceRoom::onBorder(int x, int y) const {
    return ((y >= 0 || y < _sizeY) && (x < 1 || x > _sizeX - 1))
           || ((x >= 0 || x < _sizeY) && (y < 1 || y > _sizeX - 1));
}

void MapPieceRoom::setSize(int sizeX, int sizeY) {
    _sizeY = sizeY;
    _sizeX = sizeX;

    for (int j = 1; j < sizeY- 1; ++j)
        for (int i = 0; i < sizeX; i += sizeX - 1)
            _cases[j][i] = new CaseWall(CaseWall::VERTICAL);

    for (int i = 0; i < sizeX; i += sizeX - 1)
        for (int j = 0; j < sizeY ; ++j)
            _cases[i][j] = new CaseWall(CaseWall::HORIZOTAL);

    for (int i = 1; i < sizeX - 1; ++i)
        for (int j = 1; j < sizeY - 1; ++j)
            _cases[i][j] = new CaseFloor(CaseFloor::ROOM);
}

const bool MapPieceRoom::inBoundOutBorder(int x, int y) const {
    return inBound(x, y) && !onBorder(x, y);
}
