#include <iostream>
using namespace std;
int takeDamage(int health);
int main()
{
int health=100;
cout << "\nInitially your Health was:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
health=takeDamage(health);
cout << "\nAfter Exposure to Radiation your health is:\n" << health << endl;
cout << "\nOops ..!! Play Again..!!\n";
return 0;
}
inline int takeDamage(int health)
{
return (health/2);
}
