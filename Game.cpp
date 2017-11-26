//
// Created by karibukai on 22/11/17.
//

#include "Game.h"
#include "Output.h"

Game::Game(Human *human, Map *map) {
    this->hud = new Hud(human);
    this->human = human;
    this->map = map;
}

const bool Game::isRunning() const {
    return human->getStatistics()->getLife() <= 0;
}

void Game::create() {
    Output::separation(20);
    Output::display("new game");
    Output::separation(20);
}

void Game::render() {
    map->act();
    Output::display(map->toString());
    Output::separation(map->getWidth());
    Output::display(hud->toString());
}

void Game::dispose() {
    // win or defeat
    Output::separation(20);
    Output::display("end game");
    Output::separation(20);
}
