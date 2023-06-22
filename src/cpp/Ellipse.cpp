#include "../headers/Ellipse.h"
#include "../headers/Point.h"

Point Ellipse::getPoint(double t) const
{
    double x = R_xAxis * cos(t) + center.x;
    double y = R_yAxis * sin(t) + center.y;
    double z = center.z;
    return Point(x, y, z);
}

Point Ellipse::getDerivative(double t) const
{
    double dx = -R_xAxis * sin(t);
    double dy = R_yAxis * cos(t);
    double dz = 0.0;
    return Point(dx, dy, dz);
}

CurveType Ellipse::getType() const
{
    return CurveType::ELLIPSE;
}