#include <iostream>
using namespace std;

class Circle
{
    double radius;
    public:
    const double pi = 3.14;

    explicit Circle(double r) : radius(r) {}

    Circle(const Circle &circle, double newRadius) : radius(newRadius) {}

    double area()
    {
        return pi * radius * radius;
    }

    void display()
    {
        cout << "Radius: " << radius << ", Area: " << area() << endl;
    }
};

int main()
{
    Circle circle1(5.0);
    cout << "Original Circle: ";
    circle1.display();

    Circle circle2(circle1, 10.0);
    cout << "Copied Circle with different radius: ";
    circle2.display();

    return 0;
}