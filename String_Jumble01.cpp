#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int dice = rand()%6+1;
    string random = "The World is Yours !!";
    cout << "The String is ::" << random << endl;
    cout << "The Size of the String is ::" << random.size() << endl;
    for (unsigned int i=0;i<random.size();++i)
    {
        if (random[dice]==' ')
            {
               cout << "Oops!! Whitespace !!" << endl;
               break;
            }
        else
            {
                cout << "Random String generator Output is ::" << random[dice] << endl;
                cout << "The position if random character is String is ::" << dice << endl;
                break;
            }
    }
    return 0;
}
