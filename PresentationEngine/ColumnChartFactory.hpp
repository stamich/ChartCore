//
// Created by michal on 02.03.2020.
//

#ifndef CHARTCORE_COLUMNCHARTFACTORY_HPP
#define CHARTCORE_COLUMNCHARTFACTORY_HPP

#include <iostream>
#include "ColumnChart.hpp"
#include "AbstractPresentationFactory.hpp"

class ColumnChartFactory : public AbstractPresentationFactory {
public:
    ~ColumnChartFactory();

    Chart* createChart();
};


#endif //CHARTCORE_COLUMNCHARTFACTORY_HPP
