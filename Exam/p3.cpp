#include<iostream>
using namespace std;

class Cricket_score_manager
{
    int totalRuns, wickedLost;
    public:
    Cricket_score_manager() : totalRuns(0), wickedLost(0) {}
    public:
    friend void updateScore(Cricket_score_manager &p1, int runs, int wicked);

    void display()
    {
        cout << "Total Runs - " << totalRuns << endl;
        cout << "Wicked Lost - " << wickedLost << endl;
    }

};

void updateScore(Cricket_score_manager &p1, int runs, int wicked)
{
    p1.totalRuns = p1.totalRuns + runs;
    p1.wickedLost = p1.wickedLost + wicked;
};

class Batsman
{
    string name;
    public:
    Batsman(string s)
    {
        name = s;
    }

    void displayBatsman()
    {
        cout << "Batsman is - " << name << endl;
    }

    friend class Cricket_score_manager;

};

int main()
{
    Cricket_score_manager csm;

    Batsman sachin("Sachin Tendulkar");
    csm.display();
    sachin.displayBatsman();

    updateScore(csm, 100, 1);
    csm.display();

    Batsman virat("Virat Kohli");
    virat.displayBatsman();

    updateScore(csm, 90, 2);
    csm.display();

    return 0;

}