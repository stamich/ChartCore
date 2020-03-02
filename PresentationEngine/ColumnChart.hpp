//
// Created by michal on 02.03.2020.
//

#ifndef CHARTCORE_COLUMNCHART_HPP
#define CHARTCORE_COLUMNCHART_HPP

#include <iostream>
#include "Chart.hpp"

class ColumnChart : public Chart {
public:
    ~ColumnChart();

    const char* getName();
};


#endif //CHARTCORE_COLUMNCHART_HPP
