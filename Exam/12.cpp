#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

    public:
    loc() {}
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    loc operator+(loc ob2);
};

loc loc::operator+(loc ob2)
{
    loc temp;
    temp.longitude = longitude + ob2.longitude;
    temp.latitude = latitude + ob2.latitude;
    return temp;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30);
    ob1.show(); // displays 10 20
    ob2.show(); // displays 5 30
    ob1 = ob1 + ob2;
    ob1.show(); // displays 15 50
    return 0;
}

// #include <iostream>
// using namespace std;

// class Complex
// {
//     public:
//     int r, i;

//     Complex()
//     {
//         r = i = 0;
//     }
//     Complex(int a, int b)
//     {
//         r = a;
//         i = b;
//     }

//     Complex operator+(Complex n)
//     {
//         Complex temp;
//         temp.r = r + n.r;
//         temp.i = i + n.i;
//         return temp;
//     }

//     void show()
//     {
//         cout << "The number is " << r << " + " << i << "i" << endl;
//     }
// };

// int main()
// {
//     Complex n1(1, 2), n2(2, 3), n3;
//     n1.show();
//     n2.show();
//     n3 = n1 + n2;
//     n3.show();
//     return 0;

// }