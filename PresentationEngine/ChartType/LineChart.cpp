//
// Created by michal on 01.03.2020.
//

#include "LineChart.hpp"

LineChart::~LineChart() {
    std::cout << "Line chart deleted..." << std::endl;
}

const char * LineChart::getName() {
    return "Line chart produced...";
}