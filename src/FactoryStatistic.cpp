//
// Created by karibukai on 27/12/17.
//

#include "FactoryStatistic.h"

Statistic *FactoryStatistic::makeKnight(){
    return new Statistic(15, 13, 13, 7);
}

Statistic *FactoryStatistic::makeWarrior(){
    return new Statistic(11, 14, 16, 11);
}

Statistic *FactoryStatistic::makeThief(){
    return new Statistic(9, 10, 9, 14);
}

Statistic *FactoryStatistic::makeSorcerer(){
    return new Statistic(7, 9, 7, 12);
}

Statistic *FactoryStatistic::makeDeprived(){
    return new Statistic(10, 10, 10, 10);
}
