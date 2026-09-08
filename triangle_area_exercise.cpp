// A program that calculates the area of a triangle given the coordinates of its three vertices using Heron's formula.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Prompt the user for the coordinates of the three vertices
    cout << "Enter three points for a triangle (x1 y1 x2 y2 x3 y3): ";
    double x1 = 0.0, y1 = 0.0;
    double x2 = 0.0, y2 = 0.0;
    double x3 = 0.0, y3 = 0.0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Calculate the length of each side using the distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Compute the semi-perimeter (s)
    double semiPerimeter = (side1 + side2 + side3) / 2.0;

    // Calculate the area using the given formula
    double triangleArea = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    // Display the calculated area formatted to one decimal place
    cout << "The area of the triangle is " << fixed << setprecision(1) << triangleArea << "\n";

    return 0;
}
