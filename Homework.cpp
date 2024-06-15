#include<iostream>
using namespace std;

class Pele
{
    public:
    int numberOf_Matches;
    int numberOf_Trophies;
    int age;
    void priceDuringAuction(int price)
    {
        cout << price;
    }
};

class Messi : virtual public Pele
{

};

class Ronaldo : virtual public Pele
{

};

class MBappe : public Messi , public Ronaldo
{

};

int main()
{
    
}