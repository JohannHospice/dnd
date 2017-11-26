//
// Created by karibukai on 26/11/17.
//

#ifndef DND_HUD_H
#define DND_HUD_H

#include "Player.h"
#include "Stringable.h"

class Hud : Stringable {
    Human *human;
public:
    explicit Hud(Human *);

    const std::string toString() const override;
};

#endif //DND_HUD_H
