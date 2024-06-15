#include <iostream>
using namespace std;

class myClass
{
    public:
    int who;
    myClass(int id)
    {
        cout << "Initializing " << id << "\n";
        who = id;
    }
    ~myClass()
    {
        cout << "Destructing " << who << "\n";
    }
} glob_ob1(1), glob_ob2(2);

int main()
{
    myClass local_ob1(3);
    cout << "This is not the first line. \n";
    myClass local_ob2(4);
    return 0;
}