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

    void create() override = 0;

    void dispose() override;

    void pause() override;

    void update(GameEngine *game) override;

protected:
    const int getPosition() const;

    const int getOptionSize() const;

    void setTitle(const char *title);

    void addOption(const char *option);

    virtual void chooseOption(GameEngine *pEngine) const = 0;

private:
    std::string _title;
    int _cursorPosition, _optionSize;
    std::vector<std::string> _options;
};


#endif //DND_GAMESTATEMENU_H
