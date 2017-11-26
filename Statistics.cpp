//
// Created by karibukai on 22/11/17.
//

#include "Statistics.h"


Statistics::Statistics() = default;

Statistics::Statistics(int a, int d, int l, int v) : attack(a), defense(d), life(l), view(v) {

}

void Statistics::setAttack(const int attack) {
    this->attack = attack;
}

void Statistics::setDefense(const int defense) {
    this->defense = defense;
}

void Statistics::setLife(const int life) {
    this->life = life;
}

void Statistics::setView(const int view) {
    this->view = view;
}

const int Statistics::getLife() const {
    return life;
}

const int Statistics::getDefense() const {
    return defense;
}

const int Statistics::getAttack() const {
    return attack;
}

const int Statistics::getView() const {
    return view;
}
