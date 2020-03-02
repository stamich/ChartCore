//
// Created by michal on 01.03.2020.
//

#include "ScatterChartFactory.hpp"

ScatterChartFactory::~ScatterChartFactory() {
    std::cout << "Scatter chart factory deleted..." << std::endl;
}

Chart * ScatterChartFactory::createChart() {
    return new ScatterChart();
}