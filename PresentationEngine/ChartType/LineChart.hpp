//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_LINECHART_HPP
#define TEMPORAL_LINECHART_HPP

#include "AbstractChart.hpp"
#include <iostream>

class LineChart : public AbstractChart {
public:
    ~LineChart();

    const char* getName();
};

#endif //TEMPORAL_LINECHART_HPP
