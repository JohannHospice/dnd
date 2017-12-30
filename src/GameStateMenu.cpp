#include <iostream>
#include "GameStateMenu.h"

void GameStateMenu::resume() {
    _cursorPosition = 0;
}

void GameStateMenu::handleEvent(GameEngine *game, TerminalInput *input) {
    int i = input->input();
    if (i == input->getUp())
        _cursorPosition = abs(_cursorPosition - 1) % getOptionSize();
    else if (i == input->getDown())
        _cursorPosition = (_cursorPosition + 1) % getOptionSize();
    else if (i == input->getEnter() || i == input->getRight())
        chooseOption(game);
    else if (i == input->getExit() || i == input->getLeft())
        game->quit();

}

void GameStateMenu::render(GameEngine *game, TerminalOutput *pIO) {
    std::string str = _title + "\n";
    for (int i = 0; i < getOptionSize(); i++) {
        if (i == getPosition())
            str += ">";
        str += "\t" + _options.at(i) + "\n";
    }
    pIO->print(str.c_str());
}

const int GameStateMenu::getPosition() const {
    return _cursorPosition;
}

const int GameStateMenu::getOptionSize() const {
    return _options.size();
}

void GameStateMenu::setTitle(const char *title) {
    _title = title;

}

void GameStateMenu::addOption(const char *option) {
    _options.emplace_back(option);
}

void GameStateMenu::dispose() {
    _options.clear();
}

void GameStateMenu::pause() {}

void GameStateMenu::update(GameEngine *game) {}
