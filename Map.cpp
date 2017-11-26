//
// Created by karibukai on 22/11/17.
//

#include "Map.h"

std::string Map::toString() const {
    if (activeStage == nullptr)
        throw "no active stage";
    return activeStage->toString();
}

void Map::act() {
    if (activeStage != nullptr)
        activeStage->act();
}

void Map::addStage(const Stage *stage) {
    int stageWidth = stage->getWidth();
    int stageHeight = stage->getHeight();
    if (width < stageWidth)
        width = stageWidth;
    if (height < stageHeight)
        height = stageHeight;
    depth++;
    stages.push_back(*stage);
}

const Stage *Map::getActiveStage() const {
    return activeStage;
}

int Map::getWidth() {
    return width;
}

