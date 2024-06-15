#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;

public:
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    Rectangle(const Rectangle &rect, int w, int h)
    {
        width = w;
        height = h;
    }

    int area()
    {
        return width * height;
    }

    void display()
    {
        cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
    }
};

int main()
{

    Rectangle rect1(10, 5);
    cout << "Original Rectangle: ";
    rect1.display();

    Rectangle rect2(rect1, 20, 10);
    cout << "Copied Rectangle with different dimensions: ";
    rect2.display();

    return 0;
}
