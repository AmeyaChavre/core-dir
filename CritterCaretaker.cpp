#include <iostream>
using namespace std;
class Critter
{
public:
    Critter(int hunger=0,int boredom=0);
    void Talk();
    void Eat(int food=4);
    void Play(int fun=4);
private:
    int m_hunger;
    int m_boredom;
    int getMood() const;
    void Passtime(int time=1);
};
Critter::Critter(int hunger,int boredom):
    m_hunger(hunger),
    m_boredom(boredom)
    { }
inline int Critter::getMood() const
{
    return (m_hunger+m_boredom);
}
void Critter::Passtime(int time)
{
    m_hunger+=time;
    m_boredom+=time;
}
void Critter::Talk()
{
cout << "I am a Critter and I feel ";
int mood=getMood();
if (mood>15)
    {
        cout << "mad.\n";
    }
else if (mood>10)
    {
        cout << "frustrated.\n";
    }
else if(mood>5)
    {
        cout << "okay.\n";
    }
else
    {
        cout << "happy.\n";
    }
Passtime();
}
void Critter::Eat(int food)
{
    cout << "Burrrp.\n" ;
    m_hunger-=food;
    if (m_hunger<0)
    {
        m_hunger=0;
    }
Passtime();
}
void Critter::Play(int fun)
{
    cout << "Let's Play.\n";
    m_boredom-=fun;
    if (m_boredom<0)
    {
        m_boredom=0;
    }
Passtime();
}
int main()
{
Critter crit;
crit.Talk();
int choice;
do
{
        cout << "\n**The Critter Caretaker Game**\n" << endl;
        cout <<  "Enter 0 to Quit." << endl;
        cout << "Enter 1 to talk to Critter." << endl;
        cout << "Enter 2 to feed the Critter." << endl;
        cout << "Enter 3 to play with Critter." << endl;
        cout << "Please enter the choice. :" << endl;
        cin >> choice;
        switch(choice)
        {
            case 0:
                cout << "Good Bye! Exiting the Game.\n" << endl;
                break;
            case 1:
                crit.Talk();
                break;
            case 2:
                crit.Eat();
                break;
            case 3:
                crit.Play();
                break;
            default:
                cout << "Sorry but the Choice :" << choice << "is Invalid. Please try again.\n" << endl;
        }
}while(choice!=0);
return 0;
}
