#include "../headers/Circle.h"
#include "../headers/Point.h"

double Circle::Radius()
{
    return R_xAxis;
}

CurveType Circle::getType() const
{
    return CurveType::CIRCLE;
}