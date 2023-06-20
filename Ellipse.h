#pragma once
#include <iostream>
#include <cassert>
#include "Curve.h"
#include "Point.h"

class Ellipse : public Curve {
private:
    double r1, r2;
public: 
    Ellipse(double _r1, double _r2);

    Point* getPoint(double t);
    void printCurveType();
    double getRadius();
    Point* deriv(double t);
};
