#include <iostream>
using namespace std;
struct Biodata
{
char name[20];
int age;
float percentile;
};
int main()
{
Biodata Student[2]
{
{"John",23,99.9},
{"Michael",21,98.8}
};
cout << "First Student name: " << Student[0].name << endl;
cout << "First Student Age: " << Student[0].age << endl;
cout << "First Student percentile: " << Student[0].percentile << endl;
cout << "Second Student name: " << Student[1].name << endl;
cout << "Second Student Age: " << Student[1].age << endl;
cout << "Second Student percentile: " << Student[1].percentile << endl;
return 0;
}
