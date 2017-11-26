//
// Created by karibukai on 25/11/17.
//

#ifndef DND_HUMAN_H
#define DND_HUMAN_H


#include <string>
#include "Actor.h"
#include "Stage.h"
#include "Key.h"

class Human : public Actor {
    std::string name;
    Inventory *inventory;
public:
    Human(const char, Statistics *, const std::string);

    void act(Stage *pStage) override;

    const bool handleInventory();

    const std::string getName() const;

    void setName(const std::string);

};


#endif //DND_HUMAN_H
