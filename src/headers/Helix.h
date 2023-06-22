#pragma once
#include <iostream>
#include <cassert>
#include "Curve.h"
#include "Point.h"

class Helix : public Curve
{
private:
    double R;
    double step;
    Point center;

public:
    Helix(double Radius, double Step, Point Center)
        : R(Radius), step(Step), center(Center)
    {
        if (Radius <= 0)
        {
            throw std::invalid_argument("Invalid helix parameters: negative or zero values.");
        }
    }

    Point getPoint(const double t) const override;
    Point getDerivative(const double t) const override;
    CurveType getType() const override;
};
