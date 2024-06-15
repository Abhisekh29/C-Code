#include <iostream>

int *binaryAdd(int *A, int *M, int *c)
{
    int carry = 0,
        *result = new int[4];

    if (result == NULL)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return NULL;
    }

    for (int i = 3; i >= 0; i--)
    {
        result[i] = A[i] ^ M[i] ^ carry;
        carry = (A[i] & M[i]) | (carry & (A[i] ^ M[i]));
    }

    if (carry == 1)
        *c = 1;
    else
        *c = 0;

    return result;
}

void shift(int *A, int *Q, int *c)
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
        std::cout << A[i];
    }

    std::cout << " ";

    for (int i = 0; i < 4; i++)
    {
        std::cout << Q[i];
    }

    std::cout << std::endl;
}

int *numToArr(int num)
{
    int *arr = new int[4];

    if (arr == NULL)
    {
        return NULL;
    }

    for (int i = 3; i >= 0; i--)
    {
        arr[i] = num % 10;
        num /= 10;
    }

    return arr;
}

int main()
{
    int n = 4, c = 0, A[4] = {0}, *Q, *M, num;

    std::cout << "Enter M: ";
    std::cin >> num;

    M = numToArr(num);

    std::cout << "Enter Q: ";
    std::cin >> num;

    Q = numToArr(num);

    while (n > 0)
    {
        if (Q[3] == 1)
        {
            int *result = binaryAdd(A, M, &c);

            for (int i = 0; i < 4; i++)
            {
                A[i] = result[i];
            }

            delete[] result;
        }

        shift(A, Q, &c);

        n--;
    }

    print(A, Q);

    delete[] M;
    delete[] Q;
}