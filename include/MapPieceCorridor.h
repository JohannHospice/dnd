//
// Created by karibukai on 28/12/17.
//

#ifndef DND_MAPPIECECORRIDOR_H
#define DND_MAPPIECECORRIDOR_H


#include <MapPiece.h>

class MapPieceCorridor : public MapPiece {

public:
    MapPieceCorridor(std::vector<Vector *> vectors, int originX, int originY);
};


#endif //DND_MAPPIECECORRIDOR_H
