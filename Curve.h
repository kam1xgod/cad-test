#pragma once
#include <iostream>
#include <cassert>
#include "Point.h"


class Curve {

public:
    int objType;
    virtual Point* getPoint(double t) = 0;
    virtual void printCurveType() = 0;
    virtual double getRadius() = 0;
    virtual Point* deriv(double t) = 0; 
    void printDeriv(Point* p);
};
