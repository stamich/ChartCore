//
// Created by michal on 01.03.2020.
//

#ifndef CHARTCORE_CHART_HPP
#define CHARTCORE_CHART_HPP

class Chart {
public:
    virtual ~Chart() {}

    virtual const char* getName() = 0;
};

#endif //CHARTCORE_CHART_HPP
