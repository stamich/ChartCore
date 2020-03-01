//
// Created by michal on 01.03.2020.
//

#ifndef CHARTCORE_LINEDCHARTFACTORY_HPP
#define CHARTCORE_LINEDCHARTFACTORY_HPP

#include "AbstractPresentationFactory.hpp"
#include "LinedChart.hpp"

class LinedChartFactory : public AbstractPresentationFactory {
public:
    ~LinedChartFactory() {}

    Chart* createChart();
};

#endif //CHARTCORE_LINEDCHARTFACTORY_HPP
