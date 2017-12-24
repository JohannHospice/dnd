#include <conio.h>
#include <iostream>
#include <cmath>

#include "keys.h"
#include "StateMenu.h"
#include "StatePlay.h"

StateMenu StateMenu::m_self;

void StateMenu::create()
{
    m_title = "Dungeon and dragon";
    m_options.push_back("play");
    m_options.push_back("exit");
    m_optionSize = 2;
    m_cursorPosition = 0;
}

void StateMenu::dispose()
{

}

void StateMenu::pause()
{
    m_cursorPosition = 0;
}

void StateMenu::resume()
{

}

void StateMenu::render(GameEngine *game)
{
    std::cout << m_title << std::endl;
    for(int i = 0; i < m_optionSize; i++){
        if(i == m_cursorPosition)
            std::cout << ">";
        std::cout << "\t" + m_options.at(i) << std::endl;
    }

}

void StateMenu::handleEvent(GameEngine *game, int event)
{
    switch(event) {
        case KEY_UP:
            m_cursorPosition = (m_cursorPosition + 1) % m_optionSize;
            break;
        case KEY_DOWN:
            m_cursorPosition = abs(m_cursorPosition - 1) % m_optionSize;
            break;
        case KEY_ENTER:
            switch(m_cursorPosition) {
                case OPTION_QUIT:
                    game->quit();
                    break;
                case OPTION_PLAY:
                    game->changeState(StatePlay::instance());
                    break;
            }
            break;
        case KEY_ESC:
            game->quit();
            break;
    }
}

void StateMenu::update(GameEngine *game)
{

}
