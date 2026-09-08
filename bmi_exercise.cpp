// A program to calculate BMI
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Conversion constants
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;

    // Prompt the user to enter weight in pounds
    cout << "Enter weight in pounds: ";
    double weightInPounds = 0.0;
    cin >> weightInPounds;

    // Prompt the user to enter height in inches
    cout << "Enter height in inches: ";
    double heightInInches = 0.0;
    cin >> heightInInches;

    // Convert measurements to metric units (kilograms and meters)
    double weightInKilograms = weightInPounds * KILOGRAMS_PER_POUND;
    double heightInMeters = heightInInches * METERS_PER_INCH;

    // Calculate Body Mass Index (BMI = weight_kg / (height_m)^2)
    double bodyMassIndex = weightInKilograms / (heightInMeters * heightInMeters);

    // Display the calculated BMI rounded to two decimal places
    cout << "BMI is " << fixed << setprecision(2) << bodyMassIndex << "\n";

    // Interpret and display the BMI category based on health thresholds
    if (bodyMassIndex < 18.5)
    {
        cout << "Underweight\n";
    }
    else if (bodyMassIndex < 25.0)
    {
        cout << "Normal\n";
    }
    else if (bodyMassIndex < 30.0)
    {
        cout << "Overweight\n";
    }
    else
    {
        cout << "Obese\n";
    }

    return 0;
}
