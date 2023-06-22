#pragma once
#include <iostream>
#include <cassert>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <stdexcept>

struct Point
{
    double x;
    double y;
    double z;

    Point(double x, double y, double z) : x(x), y(y), z(z) {}
    Point() : x(0), y(0), z(0) {}
};