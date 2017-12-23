
#include "GameRunner.h"
#include "GameEngine.h"
#include "StateMenu.h"

int main(){
    GameRunner *runner = new GameRunner(new GameEngine());

    runner->start(StateMenu::instance());

    return 0;
}
/*
#include <conio.h>
#include <iostream>
using namespace std;

#include "keys.h"

int main(){
    int c = 0;
    while(1)
    {
        c = getch();
        cout << c << endl;
    }

    return 0;
}
*/
