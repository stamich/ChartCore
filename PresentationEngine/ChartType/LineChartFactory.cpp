//
// Created by michal on 01.03.2020.
//

#include "LineChartFactory.hpp"

LineChartFactory::~LineChartFactory() {
    std::cout << "Line chart factory deleted..." << std::endl;
}

AbstractChart * LineChartFactory::createChart() {
     return new LineChart();
}