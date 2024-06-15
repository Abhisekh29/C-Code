#include<iostream>
using namespace std;

class pele{
    public:
        int numberof_matches;
        int numberof_trophies;
        int age;
        
        void priceDuringAuction(){
            cout << "Pele : price during auction is not present : Retired" << endl;
        }    
};

class Messi : virtual public pele{
    public:
            void priceDuringAuction_messi(){
                cout << "Messi : price during auction is extrem high : 1 Billion !!!!" << endl;   
            }
};

class Ronaldo : virtual public pele{
    public:
            void priceDuringAuction_ronaldo(){
                cout << "Ronaldo : price during auction is very high : 799 Millions !!!" << endl;   
            }
};

class MBappe : public Messi, public Ronaldo{
    public:
            void priceDuringAuction_mbappe(){
                cout << "MBappe: price during auction is high : 500 Millions !!" << endl;   
            }
};

int main()
{
    pele p;
    p.numberof_matches=1300;
    p.numberof_trophies=50;
    p.age=80;
    p.priceDuringAuction();

    Messi m;
    m.numberof_matches=1000;
    m.numberof_trophies=60;
    m.age=34;
    m.priceDuringAuction_messi();

    Ronaldo r;
    r.numberof_matches=1023;
    r.numberof_trophies=55;
    r.age=37;
    r.priceDuringAuction_ronaldo();

    MBappe mb;
    mb.numberof_matches=500;
    mb.numberof_trophies=21;
    mb.age=25;
    mb.priceDuringAuction_mbappe();

    cout << "MBappe stats" << endl;
    cout << "Matches :" << mb.numberof_matches << endl;
    cout << "Trohies :" << mb.numberof_trophies << endl;
    cout << "age :" << mb.age << endl;
    return  0;   
}


