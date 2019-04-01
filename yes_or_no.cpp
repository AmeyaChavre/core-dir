#include <iostream>
#include <string>
using namespace std;
char askYesNo1();
char askYesNo2(string);
int main()
{
    char answer1=askYesNo1();
    cout << "Thanks for answering: " << answer1 << endl;
    char answer2=askYesNo2("Do you wish to save your game?");
    cout << "Thanks for answering: " << answer2 << endl;
    return 0;
}

char askYesNo1()
    {
        char response1;
        do
            {
                cout << "Please enter 'y' or 'n' :" << endl;
                cin >> response1;
            }while(response1!='y' && response1!='n');
    }

char askYesNo2(string question)
    {
        char response2;
        do
            {
                cout << question << " (y/n) :" << endl;
                cin >> response2;
            }while(response2!='y' && response2!='n');
    }