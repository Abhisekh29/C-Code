#include <iostream>
using namespace std;

class Example {
public:
    int* data;

    // Constructor
    Example(int value) {
        data = new int(value);
    }

    // Copy Constructor
    Example(const Example& a) {
        data = new int(*a.data); // Allocate new memory and copy the value
    }

    // Destructor
    ~Example() {
        delete data;
    }

    // Function to display value
    void display() const {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    Example obj1(10);
    Example obj2 = obj1; // Custom copy constructor is used
    Example obj3(obj1);

    // Now obj1 and obj2 have separate memory locations for data
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
