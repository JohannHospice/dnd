#include "Map.h"
#include <MapPiece.h>
#include <CaseWall.h>

void Map::init(int sizeX, int sizeY) {
    _sizeX = sizeX;
    _sizeY = sizeY;
    _cases = new Case **[sizeX];
    for (int i = 0; i < sizeY; ++i) {
        _cases[i] = new Case *[sizeX];
        //todo replace by filling if empty att build end
        for (int j = 0; j < sizeX; ++j) {
            _cases[i][j] = new CaseWall(CaseWall::EMPTY);
        }
    }

}

Map::Map(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY) {
    init(sizeX, sizeY);
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

Case ***Map::getCases() const {
    return _cases;
}

void Map::setCases(Case ***_cases) {
    Map::_cases = _cases;
}

void Map::setCase(int x, int y, Case *c) {
    _cases[x][y] = c;
}

Case *Map::getCase(const Vector &vector) {
    return _cases[vector.getX()][vector.getY()];
}

void Map::add(MapPiece *piece) {
    Case ***oldCases = _cases;
    int oldSizeX = _sizeX, oldSizeY = _sizeY;

    init(getSizeX() + piece->getSizeX() + piece->getOriginX(),
         getSizeY() + piece->getSizeY() + piece->getOriginY());

    for (int x = 0; x < oldSizeX; ++x)
        for (int y = 0; y < oldSizeY; ++y)
            _cases[x][y] = oldCases[x][y];

    for (int x = piece->getOriginX(); x < piece->getSizeX(); ++x)
        for (int y = piece->getOriginY(); y < piece->getSizeY(); ++y)
            _cases[x][y] = piece->getCase(x, y);
}
