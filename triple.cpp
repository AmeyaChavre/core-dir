#include <iostream>
#include <string>
using namespace std;
int triple(int num);
string triple(string str);
int main()
{
cout << "The Triple of 5: " << triple(5) << endl;
cout << "The Triple of 'gamer': " << triple("gamer") << endl;
return 0;
}
int triple(int num)
{
return (num*3);
}
string triple(string str)
{
return (str+str+str);
}
