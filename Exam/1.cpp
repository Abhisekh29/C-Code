#include<iostream>
using namespace std;

enum colors{heart, diamond = 8, spade = 3, club};
int main()
{
    cout << "The value of colours - " << heart << diamond << spade << club;
    return 0;
}