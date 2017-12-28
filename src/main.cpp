#include <GameEngine.h>
#include <GameStateMenu.h>
#include <GameRunner.h>
#include <PlayMemento.h>
#include <GameStatePlay.h>
#include <TerminalGnome.h>
// #include <TerminalCurses.h>

int main() {
    GameStatePlay::instance()->restore(PlayMemento::newGame());
    auto *engine = new GameEngine(new TerminalGnome());
    auto *runner = new GameRunner(engine);
    runner->start(GameStatePlay::instance());
    return 0;
}