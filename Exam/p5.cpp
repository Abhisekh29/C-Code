#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void makeSound() = 0;
};

class Dog : public Animal
{
    public:
    void makeSound()
    {
        cout << "Vow Vow" << endl;  
    }
};

class Cat : public Animal
{
    public:
    void makeSound()
    {
        cout << "Meow Meow" << endl;
    }
};

int main()
{
    Animal *a;
    Dog d;
    Cat c;

    a = &d;
    a -> makeSound();

    a = &c;
    a -> makeSound();

    return 0;
}