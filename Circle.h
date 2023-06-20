#pragma once
#include <iostream>
#include <cassert>
#include "Curve.h"

class Circle : public Curve {
private:
    double r;
public:
    Circle(double _r);

    Point* getPoint(double t);
    void printCurveType();
    double getRadius();
    Point* deriv(double t);
};
