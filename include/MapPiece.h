#ifndef DND_MAPPIECE_H
#define DND_MAPPIECE_H

#include <string>

#include "Case.h"
#include "Vector.h"
#include "Map.h"


class MapPiece : public Map {
public:
    MapPiece();

    MapPiece(int sizeX, int sizeY, int originX, int originY);

    int getOriginX() const;

    void setOriginX(int _originX);

    int getOriginY() const;

    void setOriginY(int _originY);

protected:
    int _originX, _originY;

};


#endif //DND_MAPPIECE_H
