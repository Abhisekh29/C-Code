#include <iostream>
using namespace std;

void binaryAdd(int A[], int M[], int *c)
{
    int result[4] = {0};
    int carry = 0;
    for (int i = 3; i >= 0; i--)
    {
        result[i] = A[i] ^ M[i] ^ carry;
        carry = (A[i] & M[i]) | (carry & (A[i] ^ M[i]));
    }
    if (carry == 1)
        *c = 1;
    else
        *c = 0;

    for (int i = 0; i < 4; ++i)
    {
        A[i] = result[i];
    }
}

void shift(int A[], int Q[], int *c)
{
    for (int i = 3; i >= 1; i--)
    {
        Q[i] = Q[i - 1];
    }
    Q[0] = A[3];

    for (int i = 3; i >= 1; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = *c;
    *c = 0;
}

void print(int A[], int Q[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << A[i];
    }
    cout << " ";
    for (int i = 0; i < 4; ++i)
    {
        cout << Q[i];
    }
}

int main()
{
    int n = 4, c = 0;
    int A[4] = {0}, Q[4] = {0}, M[4] = {0};
    int num;

    cout << "Enter M: ";
    cin >> num;

    for (int i = 3; i >= 0; i--)
    {
        M[i] = num % 10;
        num /= 10;
    }

    cout << "Enter Q: ";
    cin >> num;

    for (int i = 3; i >= 0; i--)
    {
        Q[i] = num % 10;
        num /= 10;
    }

    while (n > 0)
    {
        if (Q[3] == 1)
        {
            binaryAdd(A, M, &c);
        }
        shift(A, Q, &c);
        n--;
    }

    print(A, Q);
    cout << endl;

    return 0;
}