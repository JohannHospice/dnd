#include "MapBuilder.h"
#include <MapPieceRoom.h>
#include <CaseStair.h>

MapBuilder *MapBuilder::setRoom(int sizeX, int sizeY, int originX, int originY) {
    _pieces.push_back(new MapPieceRoom(sizeX, sizeY, originX, originY));
    return this;
}

Map *MapBuilder::build() const {
    auto *map = new Map();
    for (auto piece : _pieces)
        map->add(piece);
    return map;
}

