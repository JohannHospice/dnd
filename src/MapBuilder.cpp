#include "MapBuilder.h"
#include "MapPieceCorridor.h"
#include <MapPieceRoom.h>
#include <CaseStair.h>

MapBuilder *MapBuilder::addRoom(int sizeX, int sizeY, int originX, int originY) {
    if (_sizeX < sizeX + originX)
        _sizeX = sizeX + originX;
    if (_sizeY < sizeY + originY)
        _sizeY = sizeY + originY;
    _pieces.push_back(new MapPieceRoom(sizeX, sizeY, originX, originY));
    return this;
}

MapBuilder *MapBuilder::addCorridor(const std::vector<Vector *> &vectors, int originX, int originY) {
    _pieces.push_back(new MapPieceCorridor(vectors, originX, originY));
    return this;
}

MapBuilder *MapBuilder::setCaseStair(int piece, int x, int y, int stair) {
    _pieces.at(piece)->setCase(x, y, new CaseStair(stair));
    return this;
}

Map *MapBuilder::build() const {
    auto *map = new Map(_sizeX, _sizeY);

    for (auto piece : _pieces)
        map->add(*piece);

    map->fill();
    return map;
}

