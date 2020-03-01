//
// Created by michal on 01.03.2020.
//

#include "DottedChartFactory.hpp"

DottedChartFactory::~DottedChartFactory() {
    std::cout << "Dotted chart factory deleted..." << std::endl;
}

Chart * DottedChartFactory::createChart() {
    return new DottedChart();
}