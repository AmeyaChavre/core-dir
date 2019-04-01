#include <iostream>
using namespace std;
class Critter
{
public:
    Critter(int hunger=0);
    static int s_total;
    static int getTotal();
private:
    int m_hunger;
};
int Critter::s_total=0;
Critter::Critter(int hunger):
m_hunger(hunger)
{
cout << "A new Critter is born.!\n" << endl;
++ s_total;
};
int Critter::getTotal()
{
    return s_total;
}
int main()
{
cout << "The number of Critter's now.\n" << Critter::s_total << endl;
Critter crit1,crit2,crit3;
cout << "The number of Critter's now.\n" << Critter::getTotal() << endl;
return 0;
}

