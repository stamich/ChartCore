//
// Created by michal on 01.10.2019.
//

#ifndef CHARTCORE_ABSTRACTPRESENTATIONFACTORY_HPP
#define CHARTCORE_ABSTRACTPRESENTATIONFACTORY_HPP

#include "Chart.hpp"

class AbstractPresentationFactory {
public:
    virtual ~AbstractPresentationFactory() {}

    virtual Chart* createChart() = 0;
};

#endif //CHARTCORE_ABSTRACTPRESENTATIONFACTORY_HPP