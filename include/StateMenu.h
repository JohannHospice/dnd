#ifndef STATEMENU_H
#define STATEMENU_H

#include "GameState.h"

class StateMenu: public GameState
{
    public:
        void create() override;
        void dispose() override;

        void pause() override;
        void resume() override;

        void handleEvent(GameEngine *game, int event) override;
        void update(GameEngine *game) override;
        void render(GameEngine *game) override;

        static StateMenu* instance() {
            return &m_self;
        }

    protected:
        StateMenu() { }

    private:

        static StateMenu m_self;

        int m_cursorPosition;

        int m_optionSize;
};

#endif // STATEMENU_H
