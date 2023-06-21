#pragma once
#include "Point.h"

enum class CurveType
{
    CIRCLE,
    ELLIPSE,
    HELIX
};

class Curve
{
public:
    virtual Point getPoint(const double t) const = 0;
    virtual Point getDerivative(const double t) const = 0;
    virtual CurveType getType() const = 0;
};