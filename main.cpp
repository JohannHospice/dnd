#include "GameRunner.h"
#include "GameEngine.h"
#include "StateMenu.h"

int main(){
    GameRunner *runner = new GameRunner(new GameEngine());

    runner->start(StateMenu::instance());

    return 0;
}
