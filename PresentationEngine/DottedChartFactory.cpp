//
// Created by michal on 01.03.2020.
//

#include "DottedChartFactory.hpp"

Chart DottedChartFactory::createChart() {
    return new DottedLineChart();
}