#ifndef GAME_H
#define GAME_H

#include "HumanActor.h"
#include "Dungeon.h"
class GameMemento;

class Game
{
    public:
        Game();
        virtual ~Game();

        Dungeon * Getdungeon() { return dungeon; }
        void Setdungeon(Dungeon * val) { dungeon = val; }
        HumanActor * Gethuman() { return human; }
        void Sethuman(HumanActor * val) { human = val; }
        GameMemento *save() const;
        restore(const GameMemento memento);
    protected:

    private:
        Dungeon * dungeon;
        HumanActor * human;
};

#endif // GAME_H
