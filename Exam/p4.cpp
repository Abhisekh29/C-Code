#include<iostream>
using namespace std;

class SuperMart
{
    int customer_id;
    string date;
    public:
    void set(int id, string d)
    {
        customer_id = id;
        date = d;
    }

    int getID()
    {
        return customer_id;
    }

    string getDate()
    {
        return date;
    }

};

class depart_Cloth : public SuperMart
{
    int no_items, price_value;
    public:
    void setCloth(int n, int r)
    {
        no_items = n;
        price_value = r;
    }

    int getQuantity()
    {
        return no_items;
    }

    int getPrice()
    {
        return price_value;
    }

};

class depart_Carpet : public SuperMart
{
    int no_items, price_value;
    public:
    void setCarpet(int n, int r)
    {
        no_items = n;
        price_value = r;
    }

    int getQuantity()
    {
        return no_items;
    }

    int getPrice()
    {
        return price_value;
    }

};

class Purchase : public depart_Cloth, public depart_Carpet
{
    public:
    void display()
    {
        cout << "Customer ID - " << depart_Cloth::getID() << endl;
        cout << "Date - " << depart_Cloth::getDate() << endl;
        cout << "Total Items - " << depart_Cloth::getQuantity() + depart_Carpet::getQuantity() << endl;
        cout << "Total Price - " << depart_Cloth::getPrice() + depart_Carpet::getPrice() << endl;
    }
};

int main()
{
    Purchase s1;
    s1.depart_Cloth::set(0001, "29.12");
    s1.setCloth(4, 20);
    s1.setCarpet(5, 100);
    s1.display();
    return 0;
}