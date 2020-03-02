//
// Created by michal on 01.03.2020.
//

#include "ScatterChart.hpp"

ScatterChart::~ScatterChart() {
    std::cout << "Scatter chart deleted..." << std::endl;
}

const char* ScatterChart::getName() {
    return "Scatter chart produced...";
}