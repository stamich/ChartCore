//
// Created by michal on 21.09.2019.
//
#include <iostream>
//#include <cstdlib>
//#include <catch2/catch.hpp>
#include <iostream>
#include "PresentationEngine/Chart.hpp"

#include "PresentationEngine/LinedChartFactory.hpp"
#include "PresentationEngine/DottedChartFactory.hpp"

// Types to produce

// Factories for producing

int main() {

    DottedChartFactory* factory1 = new DottedChartFactory();
    LinedChartFactory* factory2 = new LinedChartFactory();

    Chart* c1 = factory1->createChart();
    std::cout << "Chart: " << c1->getName() << std::endl;

    Chart* c2 = factory2->createChart();
    std::cout << "Chart: " << c2->getName() << "\n" << std::endl;

    delete factory1;
    delete factory2;

    delete c1;
    delete c2;

    return 0;
}