//
// Created by karibukai on 29/12/17.
//

#ifndef DND_GAMESTATEMENU_H
#define DND_GAMESTATEMENU_H


#include <vector>
#include <string>
#include <GameState.h>

class GameStateMenu : public GameState {
public:
    void resume() override;

    void handleEvent(GameEngine *game, TerminalInput *input) override;

    void render(GameEngine *game, TerminalOutput *pIO) override;

protected:
    int _cursorPosition, _optionSize;
    std::string _title;
    std::vector<std::string> _options;
private:
    virtual void chooseOption(GameEngine *pEngine) const = 0;
};


#endif //DND_GAMESTATEMENU_H
