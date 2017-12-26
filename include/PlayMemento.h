#ifndef PLAYMEMENTO_H
#define PLAYMEMENTO


#include "ActorHuman.h"
#include "Dungeon.h"

class PlayMemento {
public:
    PlayMemento(Dungeon *dungeon, ActorHuman *);

    virtual ~PlayMemento();

    Dungeon *getDungeon() const {
        return m_dungeon;
    }

    void setDungeon(Dungeon *val) {
        m_dungeon = val;
    }

    ActorHuman *getHuman() const {
        return human;
    }

    void setHuman(ActorHuman *val) {
        human = val;
    }

protected:

private:
    Dungeon *m_dungeon;
    ActorHuman *human;
};

#endif // PLAYMEMENTO
