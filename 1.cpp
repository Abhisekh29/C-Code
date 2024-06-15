#include<iostream>
using namespace std;

class myClass
{
    public:
    int who;
    myClass(int id);
    ~myClass();
} glob_ob1(1), glob_ob(2);

myClass::myClass(int id)
{
    cout << "Initializing " << id << "\n";
    who = id;
}

myClass::~myClass()
{
    cout << "Destructing " << who << "\n";
}

int main()
{
    myClass local_ob3(3);
    cout << "This will not be first line displayed. \n";
    myClass local_ob2(4);
    return 0;
}