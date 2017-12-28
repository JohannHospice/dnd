//
// Created by djihe on 24/12/2017.
//

#ifndef DND_STAGEBUILDER_H
#define DND_STAGEBUILDER_H

#include <vector>
#include "Stage.h"
#include "MapPiece.h"

class StageBuilder {

    StageBuilder setRoom(Vector const &origin, Vector const &size);

    Stage build() const;

private:
    std::vector<MapPiece> raw;
};


#endif //DND_STAGEBUILDER_H
