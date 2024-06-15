#include<iostream>
using namespace std;

class pwr
{
    double b;
    int e;
    double val;
    public:
    pwr(double b, int e);
    double get_pwr()
    {
        return val;
    }
};

pwr::pwr(double b, int e)
{
    this -> b = b;
    this -> e = e;
    val = 1;

    if(e == 0)
    {
        return;
    }

    for( ; e > 0; e--)
    {
        val = val * b;
    }
}

int main()
{
    pwr x(4.0, 2), y(2.5, 1);
    cout << x.get_pwr() << "\n";
    cout << y.get_pwr() << "\n";
    return 0;
}