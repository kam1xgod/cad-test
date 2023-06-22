#include "../headers/Curve.h"
#include "../headers/Point.h"
#include "../headers/Ellipse.h"
#include "../headers/Circle.h"
#include "../headers/Helix.h"
#include "../headers/utils.h"
#include <numbers>

int main()
{
    int n = 100;
    std::vector<Curve*> A;

    fillRandomCurves(A, n);

    double t = std::numbers::pi / 4;
    getCurvesInfo(A, t);

    std::vector<Circle*> A_Circles = getCircles(A);

    sortingCircles(A_Circles);

    std::cout << getSum(A_Circles) << std::endl;

    std::cout << getQuickSum(A_Circles) << std::endl;

    return 0;
}