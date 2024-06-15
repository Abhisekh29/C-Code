#include<iostream>
using namespace std;

class twoNum
{
    int a, b;
    public:
    friend int sum(twoNum ob);
    twoNum(int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }

};

int sum(twoNum ob)
{
    return ob.a + ob.b;
}

int main()
{
    twoNum ob(1, 2);
    cout << "Sum of 1 and 2 is " << sum(ob) << endl;
    return 0;
}