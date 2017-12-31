#include "Map.h"
#include <MapPiece.h>
#include <VisitorCaseRemove.h>
#include <VisitorCaseMove.h>

Map::Map(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY) {
    _cases = init(sizeX, sizeY);
}

std::string Map::toString() const {
    std::string str;
    for (int x = 0; x < _sizeX; ++x) {
        for (int y = 0; y < _sizeY; ++y)
            str += _cases[x][y]->getChar();
        str += '\n';
    }
    return str;
}

const bool Map::inBound(const int x, const int y) const {
    return x >= 0 || x < _sizeX && y >= 0 && y < _sizeY;
}

const bool Map::inBound(const Vector &vector) {
    return inBound(vector.getX(), vector.getY());
}

Case *Map::getCase(int x, int y) const {
    return _cases[x][y];
}

int Map::getSizeX() const {
    return _sizeX;
}

void Map::setSizeX(int _sizeX) {
    Map::_sizeX = _sizeX;
}

int Map::getSizeY() const {
    return _sizeY;
}

void Map::setSizeY(int _sizeY) {
    Map::_sizeY = _sizeY;
}

void Map::setCase(int x, int y, Case *c) {
    _cases[x][y] = c;
}

void Map::setCase(const Vector &vector, Case *c) {
    _cases[vector.getX()][vector.getY()] = c;
}

Case *Map::getCase(const Vector &vector) {
    return _cases[vector.getX()][vector.getY()];
}

const bool Map::move(Dynamic *dynamic, Vector const &destination) {
    const Vector source = *dynamic->getVector();
    if (set(dynamic, destination)) {
        removeContent(source);
        return true;
    }
    return false;
}

const bool Map::set(Dynamic *pDynamic, const Vector &destination) {
    if (inBound(destination))
        if (getCase(destination)->accept(VisitorCaseMove(pDynamic))) {
            pDynamic->setVector(destination);
            return true;
        }
    return false;
}

const bool Map::removeContent(const Vector &source) {
    if (inBound(source))
        return getCase(source)->accept(VisitorCaseRemove());
    return false;
}


Case ***Map::init(int sizeX, int sizeY) {
    auto ***_cases = new Case **[sizeX];
    for (int i = 0; i < sizeX; ++i)
        _cases[i] = new Case *[sizeY];
    return _cases;
}

void Map::fill() {
    for (int i = 0; i < _sizeX; ++i)
        for (int j = 0; j < _sizeY; ++j)
            if (_cases[i][j] == nullptr)
                _cases[i][j] = new CaseWall(CaseWall::EMPTY);
}

void Map::add(const MapPiece &piece) {
    int originX = piece.getOriginX(), originY = piece.getOriginY();

    for (int x = originX; x < originX + piece.getSizeX(); ++x)
        for (int y = originY; y < originY + piece.getSizeY(); ++y)
            _cases[x][y] = piece.getCase(x - originX, y - originY);
}
