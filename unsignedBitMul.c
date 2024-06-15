#include <stdio.h>
#include <stdlib.h>

int *binaryAdd(int *A, int *M, int *c)
{
    int carry = 0,
        *result = (int *)malloc(4 * sizeof(int));

    if (result == NULL) 
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for(int i = 3; i >= 0; i--)
    {
        result[i] = A[i] ^ M[i] ^ carry;
        carry = (A[i] & M[i]) | (carry & (A[i] ^ M[i]));
    }

    if(carry == 1)
        *c = 1;
    else
        *c = 0;

    return result;
}

void shift(int *A, int *Q, int *c)
{
    for(int i = 3; i >=1; i--)
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

void print(int *A, int *Q)
{
    for(int i = 0; i < 4; i++)
    {
        printf("%d", A[i]);
    }

    printf(" ");

    for(int i = 0; i < 4; i++)
    {
        printf("%d", Q[i]);
    }
}

int *numToArr(int num)
{
    int *arr = (int *)malloc(4 * sizeof(int)); 

    if (arr == NULL) 
    {
        exit(0);
    }

    for(int i = 3; i >= 0; i--)
    {
        arr[i] = num % 10;
        num /= 10;
    }

    return arr;
}

int main()
{
    int n = 4,
        c = 0, 
        A[4] = {0},
        *Q,
        *M,
        num;

    printf("Enter M: ");
    scanf("%d", &num);

    M = numToArr(num);

    printf("Enter Q: ");
    scanf("%d", &num);

    Q = numToArr(num);

    while(n > 0)
    {
        if (Q[3] == 1)
        {
            int *result = binaryAdd(A, M, &c);

            for(int i = 0; i < 4; i++)
            {
                A[i] = result[i];
            }

            free(result);
        }
        
        shift(A, Q, &c);

        n--;
    }

    print(A, Q);

    printf("\n");

    free(M);
    free(Q);

    return 0;
}