#include<iostream>
using namespace std;

class base
{
    private:
    int pvt = 3;

    protected:
    int prot = 2;

    public:
    int pub = 1;

    int get_pvt()
    {
        return pvt;
    }

};

class derived : private base
{
    public:
    int get_prot(){
        return prot;
    }

    int get_Pub()
    {
        return pub;
    }

    int get_Pvt()
    {
        int pvt = get_pvt();
        return pvt;
    }

};

int main()
{
    derived ob;
    cout << "private - "  << ob.get_Pvt() << endl;
    cout << "protected - " << ob.get_prot() << endl;
    cout << "public - " << ob.get_Pub() << endl;
}