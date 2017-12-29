#ifndef STATISTIC_H
#define STATISTIC_H


class Statistic {
public:
    Statistic();

    Statistic(int life, int defense, int attack, int fieldView);

    virtual ~Statistic();

    const int getLife() const;

    bool setLife(int val);

    const int getAttack() const;

    bool setAttack(int val);

    const int getDefense() const;

    bool setDefense(int val);

    const int getFieldView() const;

    bool setFieldView(int val);

    const bool addLife(int life);

protected:

private:
    int _life;
    int _attack;
    int _defense;
    int _fieldView;
};

#endif // STATISTIC_H
