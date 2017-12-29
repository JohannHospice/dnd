//
// Created by karibukai on 27/12/17.
//

#ifndef DND_MAPBUILDER_H
#define DND_MAPBUILDER_H

#include <vector>
#include "Map.h"
#include "MapPiece.h"

class MapBuilder {
public:
    MapBuilder *addRoom(int sizeX, int sizeY, int originX, int originY);

    Map *build() const;

    MapBuilder *setCaseStair(int piece, int x, int y, int stair);

    MapBuilder *addCorridor(const std::vector<Vector *> &vectors, int originX, int originY);

private:

    std::vector<MapPiece *> _pieces;

    int _sizeX, _sizeY;
};


#endif //DND_MAPBUILDER_H
