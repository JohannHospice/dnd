#include <CaseFloor.h>
#include "MapPieceCorridor.h"

MapPieceCorridor::MapPieceCorridor(int originX, int originY, const Vector *vectors, int size) {
    _originX = originX;
    _originY = originY;
    _sizeX = 0, _sizeY = 0;
    for (int i = 0; i < size; i++) {
        int x = vectors[i].getX() + 1, y = vectors[i].getY() + 1;
        if (_sizeX < x)
            _sizeX = x;
        if (_sizeY < y)
            _sizeY = y;
    }
    _cases = init(_sizeX, _sizeY);

    for (int i = 0; i < size; i++)
        setCase(vectors[i], new CaseFloor(CaseFloor::CORRIDOR));
}
