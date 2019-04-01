#include <iostream>
using namespace std;
int main()
{
const int ArrSize=20;
char name[ArrSize];
char desert[ArrSize];
cout << "Please enter your name: \n";
cin.getline(name,ArrSize);
cout << "Please enter your favorite desert: \n";
cin.getline(desert,ArrSize);
cout << "Your name is : " << name << " and you like : " << desert << endl;
return 0;
}
