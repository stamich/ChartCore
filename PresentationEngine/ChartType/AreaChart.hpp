//
// Created by michal on 02.03.2020.
//

#ifndef CHARTCORE_AREACHART_HPP
#define CHARTCORE_AREACHART_HPP

#include "AbstractChart.hpp"
#include <iostream>

class AreaChart : public AbstractChart {
public:
    ~AreaChart();

    const char* getName();
};


#endif //CHARTCORE_AREACHART_HPP
