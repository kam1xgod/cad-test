#pragma once
#include <iostream>
#include <cassert>
#include "Curve.h"
#include "Point.h"

class Ellipse : public Curve
{
protected:
    double R_xAxis;
    double R_yAxis;
    Point center;

public:
    Ellipse(double xAxis, double yAxis, Point Center)
        : R_xAxis(xAxis), R_yAxis(yAxis), center(Center) 
    {
        if (xAxis <= 0 || yAxis <= 0)
        {
            throw std::invalid_argument("Invalid ellipse parameters: negative or zero axis length.");
        }
    }

    Point getPoint(double t) const override;
    Point getDerivative(double t) const override;
    CurveType getType() const override;
};