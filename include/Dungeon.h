#ifndef DUNGEON_H
#define DUNGEON_H

#include "Stage.h"

class Dungeon {
public:
    Dungeon();

    virtual ~Dungeon();

    Stage **Getstages() {
        return m_stages;
    }

    Stage *Getstage(const int i) {
        return m_stages[i];
    }

    void Setstages(Stage **val) {
        m_stages = val;
    }

    const int getActiveStage() const;

    void setActiveStage(int i);

protected:

private:
    Stage **m_stages;
    int activeStage;
};

#endif // DUNGEON_H
