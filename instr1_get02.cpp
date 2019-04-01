#include <iostream>
using namespace std;
int main()
{
const int ArrSize=20;
char name[ArrSize];
char desert[ArrSize];
cout << "Please enter your name: \n";
cin.get(name,ArrSize).get();
cout << "Please enter your favorite desert: \n";
cin.get(desert,ArrSize).get();
cout << "Your name is : " << name << " and you like : " << desert << endl;
return 0;
}
