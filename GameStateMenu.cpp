#include <iostream>
#include "GameStateMenu.h"

void GameStateMenu::resume() {
    _cursorPosition = 0;
}

void GameStateMenu::handleEvent(GameEngine *game, TerminalInput *input) {
    int i = input->input();
    if (i == input->getUp())
        _cursorPosition = (_cursorPosition + 1) % _optionSize;
    else if (i == input->getDown())
        _cursorPosition = abs(_cursorPosition - 1) % _optionSize;
    else if (i == input->getEnter() || i == input->getRight())
        chooseOption(game);
    else if (i == input->getExit() || i == input->getLeft())
        game->quit();

}

void GameStateMenu::render(GameEngine *game, TerminalOutput *pIO) {
    std::string str = _title + "\n";
    for (int i = 0; i < _optionSize; i++) {
        if (i == _cursorPosition)
            str += ">";
        str += "\t" + _options.at(i) + "\n";
    }
    pIO->print(str.c_str());
}
