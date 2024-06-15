#include <iostream>
using namespace std;

class Pele
{
public:
    int numberOf_Matches;
    int numberOf_Trophies;
    int age;

    virtual double priceDuringAuction()
    {
        return numberOf_Matches * 100 + numberOf_Trophies * 500 - age * 100;
    }
};

class Messi : virtual public Pele
{
public:

};

class Ronaldo : virtual public Pele
{
public:

};

class Mbappe : public Messi, public Ronaldo
{
public:    
    double priceDuringAuction()
    {
        double base_price = numberOf_Matches * 100 + numberOf_Trophies * 500 - age * 100;
        return base_price + 1000;
    }
};

int main()
{
    Mbappe mbappe;
    mbappe.numberOf_Matches = 200;
    mbappe.numberOf_Trophies = 1;
    mbappe.age = 22;
    cout << "Mbappe's estimated auction price: $" << mbappe.priceDuringAuction() << endl;

    return 0;
}