#include<iostream>
using namespace std;

class base1
{
    public:
    int i;
    base1(int x)
    {
        i = x;
        cout << "Cons base 1" << endl;
    }
    ~base1()
    {
        cout << "Desc base 1" << endl;
    }
};

class base2
{
    public:
    int j;
    base2(int y)
    {
        j = y;
        cout << "Cons base 2" << endl;
    }
    ~base2()
    {
        cout << "Desc base 2" << endl;
    }
};

class derived : public base1, base2
{
    public:
    int k;
    derived(int x, int y, int z) : base1(x), base2(y)
    {
        k = z;
        cout << "Cons derived" << endl;
    }
    ~derived()
    {
        cout << "Desc derived" << endl;
    }
    void show()
    {
        cout << i << " " << j << " " << k << endl;
    }

};

int main()
{
    derived o(1, 2, 3);
    o.show();
}