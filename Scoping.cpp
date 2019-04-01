#include <iostream>
using namespace std;
void  func();
int main()
{
// first declaration of var
int var=5;
cout << "\nIn it's first declaration the value of  var is :\n" << var << endl;
func();
    {
        int var=10;
        cout << "\nIn it's third declaration the value of var is :\n" << var << endl;
    }
cout << "\nThe value of var in it's last declaration :\n" << var << endl;
return 0;
}
void func()
{
    int var = -5;
    cout << "\nIn it's second declaration the value of var is :\n" << var << endl;
}
