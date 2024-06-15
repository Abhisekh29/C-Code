#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int w, b;

    Rectangle(int w, int b)
    {
        this -> w = w;
        this -> b = b;
    }

    int area()
    {
        return w * b;
    }

    ~Rectangle() {}
};

class Circle
{
    public:
    const double pi = 3.14;
    double r;

    Circle(double r)
    {
        this -> r = r;
    }

    double area()
    {
        return pi * r * r;
    }

    ~Circle() {}
};

int main()
{
    int ch;
    cout << "Enter 1 for Rect and 2 for Circle - \n";
    cin >> ch;

    switch(ch)
    {
    case 1: {
        int w, b;
        cout << "Enter Width and Breath - \n";
        cin >> w;
        cin >> b;
        Rectangle ob(w, b);
        cout << "Area - " << ob.area() << endl;
        break; }
    
    case 2: {
        double r;
        cout << "Enter Radius - \n";
        cin >> r;
        Circle ob(r);
        cout << "Area - " << ob.area() << endl;
        break; }

    default:
        cout << "Invalid Input";
        break;
    }
}