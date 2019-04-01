#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;
    cout << "Your Items.\n";
    for (iter=inventory.begin();iter!=inventory.end();++iter)
        {
            cout << *iter << endl;
        }
    cout << "You trade your sword for a battleaxe.\n";
    myIterator=inventory.begin();
    *myIterator="battleaxe";
    cout << "Your Items.\n";
    for (iter=inventory.begin();iter!=inventory.end();++iter)
        {
            cout << *iter << endl;
        }
    cout << "\nThe item name - ' " << *myIterator << " ' has " << myIterator->size() << " letters." << endl;
    cout << "\nThe item name - ' " << *myIterator << " ' has " << (*myIterator).size() << " letters." << endl;
    cout << "\nYou retrieve a Crossbow from a dead enemy.\n";
    inventory.insert(inventory.begin(),"Crossbow");
    cout << "\nYour Items.\n\n";
    for (iter=inventory.begin();iter!=inventory.end();++iter)
        {
            cout << *iter << endl;
        }
    cout << "\nYour armor has been destroyed in a fierce battle.\n";
    inventory.erase(inventory.begin()+2);
    cout << "\nYour Items.\n\n";
    for (iter=inventory.begin();iter!=inventory.end();++iter)
        {
            cout << *iter << endl;
        }
return 0;
}

















