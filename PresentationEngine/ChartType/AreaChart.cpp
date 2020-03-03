//
// Created by michal on 02.03.2020.
//

#include "AreaChart.hpp"

AreaChart::~AreaChart() {
    std::cout << "Line chart deleted..." << std::endl;
}

const char * AreaChart::getName() {
    return "Area chart produced...";
}