#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <vector>
using namespace std;

class GameState;

class GameEngine
{
    public:
        GameEngine();
        virtual ~GameEngine();

        void changeState(GameState* state);
        void pushState(GameState* state);
        void popState();

        void create();
        void dispose();

        void handleEvents();
        void update();
        void render();

        bool running(){ return m_running; }
        void quit() { m_running =  false; }
    protected:

    private:
        vector<GameState*> states;

        bool m_running;
};

#endif // GAMEENGINE_H
