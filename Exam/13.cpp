#include <iostream> 
using namespace std;
int main()
{
    int a = 4;
    int *ptr1 = NULL;
    ptr1 = new int;
    float *ptr2 = new float(299.121);
    int *ptr3 = new int[29];
    *ptr1 = a;
    cout << "Value of pointer variable 1 : " << *ptr1 << endl;
    cout << "Value of pointer variable 2 : " << *ptr2 << endl;
    
    if (!ptr3)
        cout << "Allocation of memory failed \n";
    else
    {
        for (int i = 0; i < 29; i++)
        {
            ptr3[i] = i;
        }
        cout << "Value of store in block of memory: " ;
        for (int i = 0; i < 29; i++)
        {
            cout << ptr3[i] << " " ;
        }
    }
    delete ptr1;
    delete ptr2;
    delete[] ptr3;
}