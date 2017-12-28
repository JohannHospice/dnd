#include "GameStatePause.h"

GameStatePause GameStatePause::_self;

void GameStatePause::create() {

}

void GameStatePause::dispose() {

}

void GameStatePause::pause() {

}

void GameStatePause::resume() {

}

void GameStatePause::handleEvent(GameEngine *game, TerminalInput *input) {
    game->popState();
}

void GameStatePause::update(GameEngine *game) {

}

void GameStatePause::render(GameEngine *game, TerminalOutput *pIO) {

}

