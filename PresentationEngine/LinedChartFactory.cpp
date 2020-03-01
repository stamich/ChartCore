//
// Created by michal on 01.03.2020.
//

#include "LinedChartFactory.hpp"

Chart LinedChartFactory::createChart() {
    return new LinedChart();
}