#pragma once
#include <iostream>
#include <cassert>
#include "Curve.h"
#include "Point.h"

class Helix : public Curve{
private: 
    double r;
public:
    Helix(double _r);
    
    Point* getPoint(double t);
    void printCurveType();
    double getRadius();
    Point* deriv(double t);
};
