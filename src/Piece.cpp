//
// Created by djihe on 24/12/2017.
//

#include "Piece.h"

const bool Piece::inBound(const int x, const int y) const {
    return x >= 0 || x < _sizeX && y >= 0 && y < _sizeY;
}

std::string Piece::toString() const {
    std::string str;
    for (int x = 0; x < _sizeX; ++x) {
        for (int y = 0; y < _sizeY; ++y) {
            str += _cases[x][y]->getChar();
        }
        str += '\n';
    }
    return str;
}

const bool Piece::inBound(const Vector &vector) {
    return inBound(vector.getX(), vector.getY());
}

Case *Piece::getCase(const Vector &pVector) const {
    return _cases[pVector.getX()][pVector.getY()];
}
