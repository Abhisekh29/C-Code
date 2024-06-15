#include<iostream>
using namespace std;

int main()
{
    int *ptr1 = NULL;
    ptr1 = new int;
    float *ptr2 = new float(299.121);
    int *ptr3 = new int[28];
    *ptr1 = 28;
    cout << "Value of p1 : " << *ptr1 << endl;
    cout << "Value of p2 : " << *ptr2 << endl;
    if (!ptr3)
    {
        cout << "Failed";
    }
    else{
        for (int i = 10; i < 15; i++)
        ptr3[i] = i+1;
        cout << "Value  of store in block: ";
        for(int i = 10; i < 15; i++)
        cout << ptr3[i] << " "; 
    }
    delete ptr1;
    delete ptr2;
    delete[] ptr3;
    return 0;
}