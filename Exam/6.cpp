#include <iostream>
using namespace std;

class Counter
{
public:
    static int c;
    Counter()
    {
        c++;
    }
    ~Counter()
    {
        c--;
    }
    int show()
    {
       return c; 
    }
};

int Counter::c;

void f(){
    Counter temp;
    cout << "Objects in Existence - " << temp.show() << endl;
}

int main()
{
    Counter ob1;
    cout << "Objects in Existence - " << ob1.show() << endl;

    Counter ob2;
    cout << "Objects in Existence - " << ob2.show() << endl;

    f();

    Counter ob3;
    cout << "Objects in Existence - " << ob3.show() << endl;

    return 0;
}