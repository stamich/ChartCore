//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_DOTTEDCHARTFACTORY_HPP
#define TEMPORAL_DOTTEDCHARTFACTORY_HPP

#include <iostream>
#include "DottedChart.hpp"
#include "AbstractPresentationFactory.hpp"


class DottedChartFactory : public AbstractPresentationFactory{
public:
    ~DottedChartFactory();

    Chart* createChart();
};


#endif //TEMPORAL_DOTTEDCHARTFACTORY_HPP
