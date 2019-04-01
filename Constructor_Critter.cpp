#include <iostream>
using namespace std;
class Critter
{
public:
    int m_hunger;
    void greet();
    Critter(int hunger=0);
};
Critter::Critter(int hunger)
{
cout << "A new Critter is born.!" << endl;
m_hunger=hunger;
}
void Critter::greet()
{
cout << "Hi , I am a Critter and my Hunger Level is : " << m_hunger << endl;
}
int main()
{
Critter crit(7);
crit.greet();
return 0;
}
