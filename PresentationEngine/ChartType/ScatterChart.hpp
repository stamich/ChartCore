//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_SCATTERCHART_HPP
#define TEMPORAL_SCATTERCHART_HPP

#include <iostream>
#include "AbstractChart.hpp"

class ScatterChart : public AbstractChart {
public:
    ~ScatterChart();

    const char* getName();
};

#endif //TEMPORAL_SCATTERCHART_HPP
