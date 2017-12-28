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
    MapBuilder *setRoom(int sizeX, int sizeY, int originX, int originY);

    Map *build() const;

private:
    std::vector<MapPiece *> _pieces;
};


#endif //DND_MAPBUILDER_H
