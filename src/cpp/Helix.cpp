#include "../headers/Helix.h"
#include "../headers/Point.h"

Point Helix::getPoint(const double t) const
{
    double x = R * cos(t) + center.x;
    double y = R * sin(t) + center.y;
    double z = step * t + center.z;
    return Point(x, y, z);
}

Point Helix::getDerivative(const double t) const
{
    double dx = -R * sin(t);
    double dy = R * cos(t);
    double dz = step;
    return Point(dx, dy, dz);
}

CurveType Helix::getType() const
{
    return CurveType::HELIX;
}