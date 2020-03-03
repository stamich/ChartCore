//
// Created by michal on 02.03.2020.
//

#ifndef CHARTCORE_AREACHARTFACTORY_HPP
#define CHARTCORE_AREACHARTFACTORY_HPP

#include <iostream>
#include "AreaChart.hpp"
#include "AbstractPresentationFactory.hpp"

class AreaChartFactory : public AbstractPresentationFactory {
public:
    ~AreaChartFactory();

    AbstractChart* createChart();
};


#endif //CHARTCORE_AREACHARTFACTORY_HPP
