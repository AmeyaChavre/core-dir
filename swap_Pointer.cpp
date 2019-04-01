#include <iostream>
using namespace std;
int badSwap(int x,int y);
int goodSwap(int* const x,int* const y);
int main()
{
int myScore=10;
int yourScore=100;
cout << "\nCalling the Bad Swap.\n" ;
badSwap(myScore,yourScore);
cout << "\nMy Score is:\n" << myScore <<  endl;
cout << "\nYour Score is:\n" <<  yourScore << endl;
cout << "\nCalling the Good Swap.\n";
goodSwap(&myScore,&yourScore);
cout << "\nMy Score is:\n" << myScore << endl;
cout << "\nYour Score is:\n" << yourScore << endl;
return 0;
}
int badSwap(int x,int y)
{
int temp=x;
x=y;
y=temp;
}
int goodSwap(int* const pX,int* const pY)
{
int temp=*pX;
*pX=*pY;
*pY=temp;
}
