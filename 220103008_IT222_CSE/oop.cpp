#include <iostream>
using namespace std;

class Pele
{
public:
    int numberOf_Matches;
    int numberOf_Trophies;
    int age;

    Pele(int matches = 0, int trophies = 0, int playerAge = 0)
    {
        numberOf_Matches = matches, numberOf_Trophies = trophies , age = playerAge;
    }

    virtual double priceDuringAuction()
    {
        return numberOf_Matches * 100 + numberOf_Trophies * 500 - age * 100;
    }
};

class Messi : virtual public Pele
{
public:
    Messi(int matches = 0, int trophies = 0, int playerAge = 0)
    {
        numberOf_Matches = matches;
        numberOf_Trophies = trophies;
        age = playerAge;
    }
};

class Ronaldo : virtual public Pele
{
public:
    Ronaldo(int matches = 0, int trophies = 0, int playerAge = 0)
    {
        numberOf_Matches = matches;
        numberOf_Trophies = trophies;
        age = playerAge;
    }
};

class Mbappe : public Messi, public Ronaldo
{
public:
    Mbappe(int matches = 0, int trophies = 0, int playerAge = 0)
    {
        numberOf_Matches = matches;
        numberOf_Trophies = trophies;
        age = playerAge;
    }
    

    double priceDuringAuction()
    {
        double base_price = Pele::priceDuringAuction();
        return base_price + 12000;
    }
};

int main()
{
    Pele pele(1363, 10, 82);
    cout << "Pele's estimated auction price: $ " << pele.priceDuringAuction() << endl;

    Messi messi(900, 44, 36); 
    cout << "Messi's estimated auction price: $ " << messi.priceDuringAuction() << endl;

    Ronaldo ronaldo(1200, 33, 39);
    cout << "Ronaldo's estimated auction price: $ " << ronaldo.priceDuringAuction() << endl;

    Mbappe mbappe(441, 16, 26);
    cout << "Mbappe's estimated auction price: $ " << mbappe.priceDuringAuction() << endl;

    return 0;
}