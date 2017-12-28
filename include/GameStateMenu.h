#ifndef STATEMENU_H
#define STATEMENU_H

#define OPTION_PLAY 0
#define OPTION_QUIT 1

#include <string>
#include <vector>

#include "GameState.h"

using namespace std;


class GameStateMenu : public GameState {
public:
    void create() override;

    void dispose() override;

    void pause() override;

    void resume() override;

    void handleEvent(GameEngine *game, TerminalInput *input) override;

    void update(GameEngine *game) override;

    void render(GameEngine *game, TerminalOutput *pIO) override;

    void chooseOption(GameEngine *game);

    static GameStateMenu *instance() {
        return &m_self;
    }

protected:

    GameStateMenu() {}

private:
    static GameStateMenu m_self;

    int m_cursorPosition, m_optionSize;
    string m_title;
    vector<string> m_options;
};

#endif // STATEMENU_H
