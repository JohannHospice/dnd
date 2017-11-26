//
// Created by karibukai on 24/11/17.
//

#include "Stage.h"

void Stage::act() const {
    for (Actor actor : actors)
        actor.act(this);
}

const bool Stage::inBound(Vector *v) const {
    return inBound(v->getX(), v->getY());
}

const bool Stage::inBound(int x, int y) const {
    return x >= 0 && x < width || y >= 0 && y < height;
}

const bool Stage::canMove(Vector *v) const {
    return inBound(v) && !get(v)->hasActor() && get(v)->;
}

Case *Stage::get(const Vector *position) const {
    return get(position->getX(), position->getY());
}

Case *Stage::get(const int x, const int y) const {
    return cases[x][y];
}

void Stage::put(Actor *actor, Vector *position) {
    get(position)->setActor(actor);
}

void Stage::move(Actor *actor, Vector *destination) {
    if (!canMove(destination))
        throw "err";
    put(nullptr, actor->getPosition());
    put(actor, destination);
}

const std::string Stage::toString() const {
    std::string stage;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            stage += cases[i][j]->getCharacter();
        stage += '\n';
    }
    return stage;
}

const int Stage::getWidth() const {
    return width;
}

const int Stage::getHeight() const {
    return height;
}

const bool Stage::hasActor(const Vector *pVector) {
    return get(pVector)->hasActor();
}

Actor *Stage::getActor(Vector *pVector) {
    return get(pVector)->getActor();
}
