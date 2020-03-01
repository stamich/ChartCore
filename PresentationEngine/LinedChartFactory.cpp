//
// Created by michal on 01.03.2020.
//

#include "LinedChartFactory.hpp"

LinedChartFactory::~LinedChartFactory() {
    std::cout << "Lined chart factory deleted..." << std::endl;
}

Chart * LinedChartFactory::createChart() {
     return new LinedChart();
}