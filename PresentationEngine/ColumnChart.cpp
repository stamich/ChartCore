//
// Created by michal on 02.03.2020.
//

#include "ColumnChart.hpp"

ColumnChart::~ColumnChart() {
    std::cout << "Column chart deleted..." << std::endl;
}

const char * ColumnChart::getName() {
    return "Column chart produced...";
}