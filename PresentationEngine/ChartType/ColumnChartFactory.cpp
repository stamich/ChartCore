//
// Created by michal on 02.03.2020.
//

#include "ColumnChartFactory.hpp"

ColumnChartFactory::~ColumnChartFactory() {
    std::cout << "Column chart factory deleted..." << std::endl;
}

AbstractChart* ColumnChartFactory::createChart() {
    return new ColumnChart();
}