#include <iostream>
using namespace std;
int access_glob();
int hide_glob();
int change_glob();
int i=10;
int main()
{
access_glob();
hide_glob();
change_glob();
cout << "\nIn main() the value of  i is :\n" << i << endl;
return 0;
}
int access_glob()
{
cout << "\nIn access_glob() the value of  i is :\n" << i << endl;
}
int hide_glob()
{
int i = -5; // this will be treated as a new variable
cout << "\nIn hide_glob() the value of i is:\n" << i << endl;
}
int change_glob()
{
i = -7; // this will change the value of global variable
cout << "\nIn change_glob() the value of i is :\n" << i << endl;
}
