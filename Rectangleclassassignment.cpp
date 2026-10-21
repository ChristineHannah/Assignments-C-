#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle(double w = 1.0, double l = 1.0) : width(w), length(l)
    {                 // constructor with default values hence won't prompt user for initialised values.
        set_width(w); // inside braces because to validate the l and w, need to call setter functions but setter functions cannot be called by initializer list, hence calling them inside the constuctor body.
        set_length(l);
    }

    void set_width(double w)
    {
        if (w > 0)
        {
            width = w;
        }
        else
        {
            cerr << "Error: Width must be positive and greater than zero." << endl;
            width = 1.0;
        }
    }
    void set_length(double l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            cerr << "Error: Length must be positive and greater than zero!" << endl; // an error message to let the user know what is wrong
            length = 1.0;                                                            // setting to default value if l <= 0
        }
    }
    double get_width() const
    { // this function returns the value of set width without changing it, hence const is used.
        return width;
    }
    double get_length() const
    {
        return length;
    }
    double area() const
    { // this function calculates the area without changing values of w and l hence const is used.
        return width * length;
    }
    double perimeter() const
    {
        return 2 * (width + length);
    }
};

int main()
{

    Rectangle my_rect1; // this creates a rectangle object with default values
    cout << "Before setting values: " << endl;
    cout << "Rectangle width: " << my_rect1.get_width() << endl;
    cout << "Rectangle length: " << my_rect1.get_length() << endl;
    my_rect1.set_width(5.6);  // setting width with length still at 1.0
    my_rect1.set_length(3.6); // w set to 5.6
    cout << "After setting values: " << endl;
    cout << "Rectangle width: " << my_rect1.get_width() << endl;
    cout << "Rectangle length: " << my_rect1.get_length() << endl;

    Rectangle my_rectangle(2.7, 6.0); // an alternative way to create a rectangle object and set values without using setting functions.
    cout << "New rectangle!!!!!" << endl;
    cout << "Rectangle width: " << my_rectangle.get_width() << endl;
    cout << "Rectangle length: " << my_rectangle.get_length() << endl;

    return 0;
}
