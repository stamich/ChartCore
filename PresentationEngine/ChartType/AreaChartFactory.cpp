//
// Created by michal on 02.03.2020.
//

#include "AreaChartFactory.hpp"

AreaChartFactory::~AreaChartFactory() {
    std::cout << "Area chart factory deleted..." << std::endl;
}

AbstractChart * AreaChartFactory::createChart() {
    return new AreaChart();
}