#include <iostream>
using namespace std;
class Critter
{
public:
    Critter(int hunger=0);
    int getHunger() const;
    void setHunger(int hunger);
private:
    int m_hunger;
};
Critter::Critter(int hunger):
    m_hunger(hunger)
{
cout << "A new Critter is Born!\n" << endl;
};
int Critter::getHunger() const
{
return m_hunger;
}
void Critter::setHunger(int hunger)
{
if (hunger<0)
    {
        cout << "The value of Hunger Level cannot be negative integer.\n" << endl;
    }
else
    {
        m_hunger=hunger;
    }
}
int main()
{
Critter crit(7);
cout << "Calling getHunger():\n" << crit.getHunger() << endl;
cout << "Setting the value as -1 using setHunger() and calling setHunger():\n" << endl;
crit.setHunger(-1);
cout << "Setting the value as 9 using setHunger() and calling setHunger():\n" << endl;
crit.setHunger(9);
cout << "Calling getHunger():\n" << crit.getHunger() << endl;
return 0;
}
