//
// Created by djihe on 24/12/2017.
//

#ifndef DND_STAGEBUILDER_H
#define DND_STAGEBUILDER_H

#include <vector>
#include "Stage.h"
#include "Piece.h"

class StageBuilder {

    StageBuilder setRoom(Vector const &origin, Vector const &size);

    Stage build() const;

private:
    std::vector<Piece> raw;
};


#endif //DND_STAGEBUILDER_H
