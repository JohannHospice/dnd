#include "Statistic.h"

Statistic::Statistic() {
    //ctor
}

Statistic::Statistic(int life, int defense, int attack, int fieldView): _life(life), _defense(defense),_attack(attack), _fieldView(fieldView){}

Statistic::~Statistic() {
    //dtor
}

const bool Statistic::addLife(int life) {
    _life += life;
    return true;
}

const int Statistic::getLife() const {
    return _life;
}

bool Statistic::setLife(const int val) {
    _life = val;
    return true;
}

const int Statistic::getAttack() const {
    return _attack;
}

bool Statistic::setAttack(const int val) {
    _attack = val;
    return true;
}

const int Statistic::getDefense() const {
    return _defense;
}

bool Statistic::setDefense(const int val) {
    _defense = val;
    return true;
}

const int Statistic::getFieldView() const {
    return _fieldView;
}

bool Statistic::setFieldView(const int val) {
    _fieldView = val;
    return true;
}
