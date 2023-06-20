#pragma once
#include <iostream>
#include <cassert>

class Point {
    
public:
    double x, y, z;
    Point(double _x, double _y, double _z);

    void printPoint();
};
