#include "Curve.h"
#include "Circle.h"

double Random(double a, double b)
{
    return (double)rand() / RAND_MAX * (std::max(a, b) - std::min(a, b)) + std::min(a, b);
}
void fillRandomCurves(std::vector<Curve*>& A, const int n);
void getCurvesInfo(std::vector<Curve*>& A, const double t);
std::vector<Circle*> getCircles(std::vector<Curve*>& A);
void sortingCircles(std::vector<Circle*>& A);
double getSum(std::vector<Circle*>& A_Circles);
double getQuickSum(std::vector<Circle*>& A_Circles);