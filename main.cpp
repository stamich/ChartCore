//
// Created by michal on 21.09.2019.
//
#include <iostream>
//#include <cstdlib>
//#include <catch2/catch.hpp>
#include <iostream>
#include "PresentationEngine/ChartType/AbstractChart.hpp"

#include "PresentationEngine/ChartType/AreaChartFactory.hpp"
#include "PresentationEngine/ChartType/ColumnChartFactory.hpp"
#include "PresentationEngine/ChartType/LineChartFactory.hpp"
#include "PresentationEngine/ChartType/ScatterChartFactory.hpp"

// Types to produce

// Factories for producing

int main() {

    AreaChartFactory* factory0 = new AreaChartFactory();

    ColumnChartFactory* factory1 = new ColumnChartFactory();

    LineChartFactory* factory2 = new LineChartFactory();

    ScatterChartFactory* factory3 = new ScatterChartFactory();

    AbstractChart* c0 = factory0->createChart();
    std::cout << "AbstractChart: " << c0->getName() << std::endl;

    AbstractChart* c1 = factory1->createChart();
    std::cout << "AbstractChart: " << c1->getName() << std::endl;

    AbstractChart* c2 = factory2->createChart();
    std::cout << "AbstractChart: " << c2->getName() << std::endl;

    AbstractChart* c3 = factory3->createChart();
    std::cout << "AbstractChart: " << c3->getName() << "\n" << std::endl;

    delete factory0;
    delete factory1;
    delete factory2;
    delete factory3;

    std::cout << "" << std::endl;

    delete c0;
    delete c1;
    delete c2;
    delete c3;

    return 0;
}