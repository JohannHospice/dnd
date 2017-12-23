#include <conio.h>
#include <iostream>

#include "keys.h"
#include "StateMenu.h"

using namespace std;

StateMenu StateMenu::m_self;

void StateMenu::create()
{

}

void StateMenu::dispose()
{

}

void StateMenu::pause()
{

}

void StateMenu::resume()
{

}

void StateMenu::render(GameEngine *game)
{

}

void StateMenu::handleEvent(GameEngine *game, int event)
{
    switch(event) {
        case KEY_UP:
            m_cursorPosition = (m_cursorPosition + 1)% m_optionSize;
            break;
        case KEY_DOWN:
            m_cursorPosition = (m_cursorPosition - 1)% m_optionSize;
            break;
        case KEY_ENTER:
            m_cursorPosition = (m_cursorPosition - 1)% m_optionSize;
            break;
        case KEY_ESC:
            m_cursorPosition = (m_cursorPosition - 1)% m_optionSize;
            break;
    }

}

void StateMenu::update(GameEngine *game)
{

}
