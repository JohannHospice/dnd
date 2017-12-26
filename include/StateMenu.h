#ifndef STATEMENU_H
#define STATEMENU_H

#define OPTION_PLAY 0
#define OPTION_QUIT 1

#include <string>
#include <vector>

#include "GameState.h"

using namespace std;


class StateMenu : public GameState {
public:
    void create() override;

    void dispose() override;

    void pause() override;

    void resume() override;

    void handleEvent(GameEngine *game, int event) override;

    void update(GameEngine *game) override;

    void render(GameEngine *game) override;

    static StateMenu *instance() {
        return &m_self;
    }

protected:
    StateMenu() {}

private:

    static StateMenu m_self;

    int m_cursorPosition, m_optionSize;
    string m_title;
    vector<string> m_options;
};

#endif // STATEMENU_H
