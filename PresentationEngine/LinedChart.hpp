//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_LINEDCHART_HPP
#define TEMPORAL_LINEDCHART_HPP

#include "Chart.hpp"
#include <iostream>

class LinedChart : public Chart {
public:
    ~LinedChart();

    const char* getName();
};

#endif //TEMPORAL_LINEDCHART_HPP
