//
// Created by michal on 01.03.2020.
//

#ifndef TEMPORAL_DOTTEDCHART_HPP
#define TEMPORAL_DOTTEDCHART_HPP

#include <iostream>
#include "Chart.hpp"

class DottedChart : public Chart {
public:
    ~DottedChart();

    const char* getName();
};


#endif //TEMPORAL_DOTTEDCHART_HPP
