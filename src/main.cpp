#include <GameEngine.h>
#include <GameStateMenuMain.h>
#include <GameRunner.h>
#include <TerminalGnome.h>

int main() {
    auto *engine = new GameEngine(new TerminalGnome());
    auto *runner = new GameRunner(engine);
    runner->start(GameStateMenuMain::instance());
    return 0;
}