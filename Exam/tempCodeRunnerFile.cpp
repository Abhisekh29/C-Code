
#include <iostream>
using namespace std;

class Complex
{
    public:
    int r, i;

    Complex()
    {
        r = i = 0;
    }
    Complex(int a, int b)
    {
        r = a;
        i = b;
    }

    Complex operator+(Complex n)
    {
        Complex temp;
        temp.r = r + n.r;
        temp.i = i + n.i;
        return temp;
    }

    void show()
    {
        cout << "The number is " << r << " + " << i << "i" << endl;
    }
};

int main()
{
    Complex n1(1, 2), n2(2, 3), n3;
    n1.show();
    n2.show();
    n3 = n1 + n2;
    n3.show();
    return 0;

}