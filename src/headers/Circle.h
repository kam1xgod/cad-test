#pragma once
#include <iostream>
#include <cassert>
#include "Ellipse.h"
#include "Point.h"

class Circle : public Ellipse
{
public:
    Circle(double Radius, Point Center) : Ellipse(Radius, Radius, Center) 
    {

    }

    double Radius();

    CurveType getType() const override;
};