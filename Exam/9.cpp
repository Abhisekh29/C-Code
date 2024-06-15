// #include<iostream>
// using namespace std;

// class obcopy
// {
//     public:
//     int i;
//     void set(int j)
//     {
//         i = j;
//     }
//     int get()
//     {
//         return i;
//     }
// };

// int main()
// {
//     obcopy o1, o2;
//     o1.set(1);
//     o2 = o1;
//     cout << o1.get() << endl;
//     cout << o2.get() << endl;
// }

#include<iostream>
using namespace std;

class obcopy
{
    public:
    int i;
    obcopy(int j)
    {
        i = j;
    }

    obcopy(const obcopy &o)
    {
        i = o.i;
    }

    int get()
    {
        return i;
    }
};

int main()
{
    obcopy o1(1);
    obcopy o2(o1);
    obcopy o3 = o1;
    cout << o1.get() << endl;
    cout << o2.get() << endl;
    cout << o3.get() << endl;
}