#include <iostream>
using namespace std;

int multiply(int a, int b) { return a * b; }

int main() {

    int (*func)(int, int); // func is a pointer to a function that takes two integers as arguments and returns an integer

    func = multiply;       // func now points to the multiply function

    int prod = func(15, 2);  // Call the function pointed to by func and store the result in prod
    cout << "The value of the product is: " << prod << endl;

    return 0;
}

#include <iostream>
using namespace std;

int a = 15;
int b = 2, j=0;

int multiply() { return a * b; }

void print(int (*funcptr)())
{
    cout << "The value of the product is: " << funcptr() << endl;
}

int main()
{
    print(multiply);
    return 0;
}

