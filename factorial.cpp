#include <iostream>
using namespace std;
int main()
{
const int ArrSize=21;
cout << "\n** THE FACTORIAL PROGRAM **\n";
long long  factorial[ArrSize];
factorial[0]=factorial[1]=1LL;
for (int i=2;i<ArrSize;++i)
{
factorial[i]=i*(factorial[i-1]);
}
for (int i=0;i<ArrSize;++i)
{
cout << i << "!" << " = " << factorial[i] << endl;
}
return 0;
}
