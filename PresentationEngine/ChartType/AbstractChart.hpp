//
// Created by michal on 01.03.2020.
//

#ifndef CHARTCORE_ABSTRACTCHART_HPP
#define CHARTCORE_ABSTRACTCHART_HPP

class AbstractChart {
public:
    virtual ~AbstractChart() {}

    virtual const char* getName() = 0;
};

#endif //CHARTCORE_ABSTRACTCHART_HPP
