//
// Created by karibukai on 27/12/17.
//

#include <GameEngine.h>
#include <GameStateMenu.h>
#include <GameRunner.h>
#include <TerminalGnome.h>
#include <PlayMemento.h>
#include <GameStatePlay.h>

int main() {
    GameStatePlay::instance()->restore(PlayMemento::newGame());
    auto *engine = new GameEngine(new TerminalGnome());
    auto *runner = new GameRunner(engine);
    runner->start(GameStatePlay::instance());
    return 0;
}