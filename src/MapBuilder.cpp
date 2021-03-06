#include "MapBuilder.h"
#include "MapPieceCorridor.h"
#include <MapPieceRoom.h>
#include <CaseStair.h>
#include <CaseFloor.h>

MapBuilder *MapBuilder::addRoom(int sizeX, int sizeY, int originX, int originY) {
    if (_sizeX < sizeX + originX)
        _sizeX = sizeX + originX;
    if (_sizeY < sizeY + originY)
        _sizeY = sizeY + originY;
    _pieces.push_back(new MapPieceRoom(sizeX, sizeY, originX, originY));
    return this;
}

MapBuilder *MapBuilder::addCorridor(int originX, int originY, const Vector *vectors, int size) {
    _pieces.push_back(new MapPieceCorridor(originX, originY, vectors, size));
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

MapBuilder *MapBuilder::setCaseFloor(int piece, int x, int y) {
    _pieces.at(piece)->setCase(x, y, new CaseFloor(CaseFloor::ROOM));
    return this;
}

void MapBuilder::clear() {
    _pieces.clear();
    _sizeY = 0;
    _sizeX = 0;
}

