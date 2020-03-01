//
// Created by michal on 21.09.2019.
//
#include <iostream>
#include <cstdlib>
#include "PresentationEngine/Chart.hpp"
#include "PresentationEngine/DottedChartFactory.hpp"
#include "PresentationEngine/LinedChartFactory.hpp"

int main() {

    DottedChartFactory *factoryD = new DottedChartFactory();
//    LinedChartFactory *factoryL = new LinedChartFactory();

    Chart *c1 = factoryD->createChart();
    std::cout << "Chart: " << c1->getName() << std::endl;

//    Chart *c2 = factoryL->createChart();
//    std::cout << "Chart: " << c2->getName() << std::endl;

    return 0;
}