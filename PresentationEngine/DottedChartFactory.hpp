//
// Created by michal on 01.03.2020.
//

#ifndef CHARTCORE_CHARTFACTORY_HPP
#define CHARTCORE_CHARTFACTORY_HPP

#include "AbstractPresentationFactory.hpp"
#include "DottedChart.hpp"
#include "Chart.hpp"

class DottedChartFactory : public AbstractPresentationFactory {
public:
    ~DottedChartFactory() {}

    Chart *createChart();
};

#endif //CHARTCORE_CHARTFACTORY_HPP
