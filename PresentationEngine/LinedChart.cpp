//
// Created by michal on 01.03.2020.
//

#include "LinedChart.hpp"

LinedChart::~LinedChart() {
    std::cout << "Lined chart deleted..." << std::endl;
}

const char * LinedChart::getName() {
    return "Lined chart produced...";
}