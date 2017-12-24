#ifndef STATISTIC_H
#define STATISTIC_H


class Statistic {
public:
    Statistic();

    virtual ~Statistic();

    const int Getlife() {
        return life;
    }

    void Setlife(const int val) {
        life = val;
    }

    const int Getattack() {
        return attack;
    }

    void Setattack(const int val) {
        attack = val;
    }

    const int Getdefense() {
        return defense;
    }

    void Setdefense(const int val) {
        defense = val;
    }

    const int GetfieldView() {
        return fieldView;
    }

    void SetfieldView(const int val) {
        fieldView = val;
    }

protected:

private:
    int life;
    int attack;
    int defense;
    int fieldView;
};

#endif // STATISTIC_H
