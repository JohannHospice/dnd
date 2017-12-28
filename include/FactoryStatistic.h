//
// Created by karibukai on 27/12/17.
//

#ifndef DND_STATISTICFACTORY_H
#define DND_STATISTICFACTORY_H


#include <Statistic.h>

class FactoryStatistic {
public:
    static Statistic *makeKnight();

    static Statistic *makeThief();

    static Statistic *makeSorcerer();

    static Statistic *makeDeprived();

    static Statistic *makeWarrior();
};


#endif //DND_STATISTICFACTORY_H
