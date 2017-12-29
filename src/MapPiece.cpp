#include "MapPiece.h"

MapPiece::MapPiece(int sizeX, int sizeY, int originX, int originY) : Map(sizeX, sizeY), _originX(originX),
                                                                     _originY(originY) {}

int MapPiece::getOriginX() const {
    return _originX;
}

void MapPiece::setOriginX(int _originX) {
    MapPiece::_originX = _originX;
}

int MapPiece::getOriginY() const {
    return _originY;
}

void MapPiece::setOriginY(int _originY) {
    MapPiece::_originY = _originY;
}

MapPiece::MapPiece() : Map() {}

