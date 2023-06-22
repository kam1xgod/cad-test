#include "../headers/utils.h"
#include "../headers/Curve.h"
#include "../headers/Helix.h"
#include "../headers/Circle.h"
#include "../headers/Point.h"

void fillRandomCurves(std::vector<Curve*>& A, const int n)
{
    for (int i = 0; i < n; i++)
    {
        Curve* figure = nullptr;
        Point center = { Random(-100, 100), Random(-100, 100), Random(-100, 100) };
        int choose = Random(1, 4);
        if (choose == 1) figure = new Ellipse(Random(0.001, 100), Random(0.001, 100), center);
        else if (choose == 2) figure = new Circle(Random(0.001, 100), center);
        else figure = new Helix(Random(0.001, 100), Random(-10, 10), center);

        A.push_back(figure);
    }
}

void getCurvesInfo(std::vector<Curve*>& A, const double t)
{
    for (const auto figure : A)
    {
        Point Coordinat = figure->getPoint(t);
        Point Derivativ = figure->getDerivative(t);
        std::cout << "Coordinates:\nx: " << Coordinat.x << "\ny: " << Coordinat.y << "\nz: " << Coordinat.z << std::endl;
        std::cout << "Derivativ:\nx: " << Derivativ.x << "\ny: " << Derivativ.y << "\nz: " << Derivativ.z << std::endl;
    }
}

std::vector<Circle*> getCircles(std::vector<Curve*>& A)
{
    std::vector<Circle*> A_Circles;
    for (const auto figure : A)
    {
        if (figure->getType() == CurveType::CIRCLE)
            A_Circles.push_back(dynamic_cast<Circle*>(figure));
    }
    return A_Circles;
}

void sortingCircles(std::vector<Circle*>& A)
{
    std::sort(A.begin(), A.end(), 
        [](Circle* a, Circle* b) {
        return a->Radius() < b->Radius();
        });
}

double getSum(std::vector<Circle*>& A_Circles)
{
    double sum = std::accumulate(A_Circles.begin(), A_Circles.end(), 0.0,
        [](double accumulator, Circle* circle) {
            return accumulator + circle->Radius();
        });
    return sum;
}

double getQuickSum(std::vector<Circle*>& A_Circles)
{
    double sum = 0.0;
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < A_Circles.size(); ++i)
    {
        double radius = A_Circles[i]->Radius();
        sum += radius;
    }
    return sum;
}