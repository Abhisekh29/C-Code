#include<iostream>
using namespace std;

class twoNum
{
    int a, b;
    public:
    friend class Sum;

    twoNum(int i, int j)
    {
        a = i;
        b = j;
    }
};

class Sum
{
    public:
    int sum(twoNum ob)
    {
        return ob.a + ob.b;
    }
};

int main()
{
    twoNum ob(1, 2);
    Sum s;
    cout << "Sum is " << s.sum(ob) << endl;
    return 0;
}