#include "GameStateMenu.h"
#include "GameStatePlay.h"

GameStateMenu GameStateMenu::m_self;

void GameStateMenu::create() {
    m_title = "Dungeon and dragon";
    m_options.push_back("play");
    m_options.push_back("exit");
    m_optionSize = 2;
    m_cursorPosition = 0;
}

void GameStateMenu::dispose() {

}

void GameStateMenu::pause() {
    m_cursorPosition = 0;
}

void GameStateMenu::resume() {

}

void GameStateMenu::render(GameEngine *game, TerminalOutput *pIO) {
    std::string str = m_title + "\n";
    for (int i = 0; i < m_optionSize; i++) {
        if (i == m_cursorPosition)
            str += ">";
        str += "\t" + m_options.at(i) + "\n";
    }
    pIO->print(str.c_str());
}

void GameStateMenu::handleEvent(GameEngine *game, TerminalInput *input) {
    int i = input->input();

    if (i == input->getUp()) {
        m_cursorPosition = (m_cursorPosition + 1) % m_optionSize;
    } else if (i == input->getDown()) {
        m_cursorPosition = abs(m_cursorPosition - 1) % m_optionSize;
    } else if (i == input->getEnter()) {
        chooseOption(game);
    } else if (i == input->getExit())
        game->quit();
}

void GameStateMenu::update(GameEngine *game){

}

void GameStateMenu::chooseOption(GameEngine *game) {
    switch (m_cursorPosition) {
        case OPTION_QUIT:
            game->quit();
            break;
        case OPTION_PLAY:
            game->pushState(GameStatePlay::instance());
            break;
    }
}
