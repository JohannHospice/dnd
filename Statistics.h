//
// Created by karibukai on 22/11/17.
//

#ifndef DND_STATISTICS_H
#define DND_STATISTICS_H


class Statistics {
    int attack = 0;
    int defense = 0;
    int life = 0;
    int view = 0;
public:
    Statistics();

    Statistics(int, int, int, int);

    void setAttack(const int);

    void setDefense(const int);

    void setLife(const int);

    void setView(const int);

    const int getLife() const;

    const int getDefense() const;

    const int getAttack() const;

    const int getView() const;
};


#endif //DND_STATISTICS_H
