#include <iostream>
using namespace std;

class Arrays
{
public:
    int i;
    Arrays(int i)
    {
        this -> i = i;
    }
    int get_i()
    {
        return i;
    }

};

int main()
{
    Arrays ob[4] = {1, 2, 3, 4};
    Arrays *p;

    p = ob;

    for(int i = 0; i <= 3; i++)
    {
        cout << p -> get_i() << " ";
        p++;
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// class Arrays
// {
// public:
//     int i;
//     Arrays(int i)
//     {
//         this -> i = i;
//     }
//     int get_i()
//     {
//         return i;
//     }

// };

// int main()
// {
//     Arrays ob(4);
//     int *p;

//     p = &ob.i;

//     cout << p << endl;
//     return 0;
// }