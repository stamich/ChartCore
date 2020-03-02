//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_SCATTERCHARTFACTORY_HPP
#define TEMPORAL_SCATTERCHARTFACTORY_HPP

#include <iostream>
#include "ScatterChart.hpp"
#include "AbstractPresentationFactory.hpp"


class ScatterChartFactory : public AbstractPresentationFactory{
public:
    ~ScatterChartFactory();

    Chart* createChart();
};


#endif //TEMPORAL_SCATTERCHARTFACTORY_HPP
