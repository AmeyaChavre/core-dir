#include <iostream>
using namespace std;
int askNumber(int high,int low=1);
int main()
{
int number;
number=askNumber(5);
cout << "\nThanks for entering:\n" << number << endl;
number=askNumber(10,5);
cout <<  "\nThanks for entering:\n" << number << endl;
return 0;
}
int askNumber(int high,int low)
{
int num;
do
    {
        cout << "\nEnter a number between:\n" << low << " - " <<  high << endl;
        cin >> num;
    }while (num>high || num<low);
return num;
}
