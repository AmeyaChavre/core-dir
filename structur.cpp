#include <iostream>
using namespace std;
struct inflatable
{
char name[20];
float volume;
double price;
};
int main()
{
cout << "Simple structure program:\n";
inflatable player1
{
"Mike Jordan",
1.88,
20.09
};
inflatable player2
{
"Karim Jabbar",
1.91,
21.01
};
cout << "The player1 is : " << player1.name << endl;
cout << "The player2 is : " << player2.name << endl;
 cout << "To price of these players added (in millions) is : " << (player1.price + player2.price) << endl;
return 0;
}
