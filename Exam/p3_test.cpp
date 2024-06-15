#include <iostream>
using namespace std;

class Cricket_score_manager
{
    int totalRuns, wicketLost;

public:
    Cricket_score_manager()
    {
        totalRuns = 0, wicketLost = 0; 
    }
    
    friend void updateScore(Cricket_score_manager &csm, int runs, int wickets);

    void displayScore()
    {
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Wickets Lost: " << wicketLost << endl;
    }
};

void updateScore(Cricket_score_manager &csm, int runs, int wickets)
{
    csm.totalRuns += runs;
    csm.wicketLost += wickets;
}

class Batsman
{
    string name;

    public:
    Batsman(string n) 
    {
        name = n;
    }

    void displayBatsman() const
    {
        cout << "Batsman Name: " << name << endl;
    }

    friend class Cricket_score_manager;
};

int main()
{
    Cricket_score_manager csm;
    Batsman sachin("Sachin Tendulkar");

    sachin.displayBatsman();
    csm.displayScore();

    updateScore(csm, 100, 1);
    csm.displayScore();

    updateScore(csm, 250, 3);
    csm.displayScore();

    Batsman virat("Virat Kohli");

    virat.displayBatsman();
    csm.displayScore();

    updateScore(csm, 50, 2);
    csm.displayScore();

    updateScore(csm, 70, 1);
    csm.displayScore();

    return 0;
}