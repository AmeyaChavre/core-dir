#include <iostream>
using namespace std;
int main()
{
cout << "\nThe sentinel character program:\n";
char ch;
cout << "Enter a Character value:\n";
cin >> ch;
int counter=0;
while(ch!='#')
{
cout << "Again Enter a Character Value:\n";
counter++;
cin>>ch;
}
cout << "The last character read, after loop ends:\n" << ch << endl;
cout << "The number of characters read:\n" << counter << endl;
return 0;
}
