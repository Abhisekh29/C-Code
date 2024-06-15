#include<iostream>
using namespace std;

class cl
{
    public:
    int i;
    cl(int j)
    {
        i = j;
    }
};

int main()
{
    cl ob(1);
    int *p;
    p = &ob.i;
    cout << *p;
    return 0;
}