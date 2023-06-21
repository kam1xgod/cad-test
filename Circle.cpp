#include "Circle.h"
#include "Point.h"

double Circle::Radius()
{
    return R_xAxis;
}

CurveType Circle::getType() const
{
    return CIRCLE;
}