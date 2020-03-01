//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_LINEDCHARTFACTORY_HPP
#define TEMPORAL_LINEDCHARTFACTORY_HPP

#include <iostream>
#include "LinedChart.hpp"
#include "AbstractPresentationFactory.hpp"

class LinedChartFactory : public AbstractPresentationFactory {
public:
    ~LinedChartFactory();

    Chart* createChart();
};



#endif //TEMPORAL_LINEDCHARTFACTORY_HPP
