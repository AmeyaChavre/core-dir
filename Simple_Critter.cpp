#include <iostream> // preprocessor directive
using namespace std; // std template library
class Critter // class declaration
{
public:
    int hungerLevel; // data member
    void greet(); // member function prototype
};
void Critter::greet() // member function definition
{
cout << "Hi , I am a Critter and my hunger level is:" << hungerLevel << endl;
}
int main()
{
Critter crit1; // critter class object 1
Critter crit2; // critter class object 2
crit1.hungerLevel=5; // using object crit1 of class Critter to access data member of Class Critter and henceforth assigning value
crit2.hungerLevel=9; // using object crit2 of class Critter to access data member of Class Critter and henceforth assigning value
cout << "crit1's hunger level is:\n" << crit1.hungerLevel << endl;
cout << "crit2's hunger level is:\n" << crit2.hungerLevel << endl;
crit1.greet();
crit2.greet();
return 0;
}
