//
// Created by karibukai on 22/11/17.
//

#ifndef DND_MAP_H
#define DND_MAP_H

#include "Stage.h"
#include "Stringable.h"

class Map : public Stringable {
    std::vector <Stage> stages;
    Stage *activeStage = nullptr;
    int width, height, deth;
public:

    Map();

    Map(Stage **);
    void addStage(Stage stage);
    const Stage *getActiveStage()const;

    void act();

    std::string toString() const override;

    int getWidth();

    void addStage(Stage *stage);

    void addStage(const Stage *stage);
};


#endif //DND_MAP_H
