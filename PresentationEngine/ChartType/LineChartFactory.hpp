//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_LINECHARTFACTORY_HPP
#define TEMPORAL_LINECHARTFACTORY_HPP

#include <iostream>
#include "LineChart.hpp"
#include "AbstractPresentationFactory.hpp"

class LineChartFactory : public AbstractPresentationFactory {
public:
    ~LineChartFactory();

    AbstractChart* createChart();
};



#endif //TEMPORAL_LINECHARTFACTORY_HPP
