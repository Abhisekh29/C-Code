#include <iostream>
using namespace std;

class Base {
public:
    virtual void add(int a, int b) {
        cout << "Base Sum: " << (a + b) << endl;
    }
};

class Add : public Base {
public:
    void add(int a, int b) {
        cout << "Derived Sum: " << (a - b) << endl;
    }
};

int main() {
    int a, b;
    Add o;
    Base *p, bo;
    p = &o;
    cin >> a;
    cin >> b;
    p->add(a, b);  // Virtual function call, resolved at runtime
    return 0;
}
