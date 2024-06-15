#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    getline(cin, word);
    cout << word << endl << word.size();
    
    return 0;
}