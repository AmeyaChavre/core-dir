#include <iostream>
using namespace std;
void increase(int* const array, const int NUM_MAX);
void display(const int* const array,const int NUM_MAX);
int main()
{
const int NUM_MAX=3;
int highScore[NUM_MAX]={3000,2000,5000};
cout << "First: " << *highScore << endl;
cout << "Second:" << *(highScore+1) << endl;
cout << "Third:" << *(highScore+2) << endl;
increase(highScore,NUM_MAX);
display(highScore,NUM_MAX);
return 0;
}
void increase(int* const array, const int NUM_MAX)
{
for (int i=0;i<NUM_MAX;++i)
    {
        array[i]+=500;
    }
}
void display(const int* const array,const int NUM_MAX)
{
    for (int i=0;i<NUM_MAX;++i)
        {
            cout << i << "==>" << array[i] << endl;
        }
}
