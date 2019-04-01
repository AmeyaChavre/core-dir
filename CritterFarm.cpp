#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Critter
{
public:
    Critter(const string& name="");
    string getName() const;
private:
    string m_name;
};
Critter::Critter(const string& name):
    m_name(name)
    {}
inline string Critter::getName() const
{
return m_name;
}
class Farm
{
public:
    Farm(int spaces = 1);
    void Add(const Critter& aCritter);
    void RollCall() const;
private:
    vector<Critter> m_Critters;
};
Farm::Farm(int spaces)
    {
        m_Critters.reserve(spaces);
    }
void Farm::Add(const Critter& aCritter)
{
m_Critters.push_back(aCritter);
}
void Farm::RollCall() const
{
for (vector<Critter>::const_iterator iter=m_Critters.begin();iter!=m_Critters.end();++iter)
{
cout << iter->getName() << " here" << endl;
}
}
int main()
{
Critter crit("Poochie");
cout << "My Critter's name is: " << crit.getName() << endl;
cout << "\nCreating a Critter Farm.\n" << endl;
Farm myFarm(3);
cout << "\nAdding 3 critter's to the Farm.!\n" << endl;
myFarm.Add(Critter("Moe"));
myFarm.Add(Critter("Larry"));
myFarm.Add(Critter("Curly"));
cout << "\nCalling RollCall.\n" << endl;
myFarm.RollCall();
return 0;
}
