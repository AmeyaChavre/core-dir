#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()

{
    vector<int>::const_iterator iter;
    cout << "Creating a list of scores:\n";
    vector <int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);
    cout << "\nHigh Scores:\n\n";
    for (iter=scores.begin();iter!=scores.end();++iter)
        {
            cout << *iter << endl;
        }
    cout << "\nFinding a Score:\n";
    cout << "\nEnter a Score:\n";
    int score;
    cin >> score;
    iter=find(scores.begin(),scores.end(),score);
    if (iter!=scores.end())
        {
                cout << "Score Found\n";
        }
    else
        {
            cout << "Score not found\n";
        }
    cout << "\nRandomizing Scores:\n";
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(),scores.end());
    cout << "\nRandom High Score\n";
    for (iter=scores.begin();iter!=scores.end();++iter)
        {
            cout << *iter << endl;
        }
    cout << "\nSorting Scores:\n";
    sort(scores.begin(),scores.end());
    cout << "\nSorted High Scores\n";
    for (iter=scores.begin();iter!=scores.end();++iter)
        {
            cout << *iter << endl;
        }
    return 0;
}






















