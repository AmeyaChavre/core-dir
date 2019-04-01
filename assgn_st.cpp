#include <iostream>
using namespace std;
struct Lamborghini
{
char color[20];
int hp;
float price;
};
int main()
{
Lamborghini Gallardo
{
"blue",
3500,
30.00
};
cout << "Lamborghini Gallardo Specifications : " << endl;
cout << "Lamborghini Gallardo color : \n" << Gallardo.color << endl;
cout << "Lamborghini Gallardo horse power :\n" << Gallardo.hp << endl;
cout << "Lamborghini Gallardo price :\n" << Gallardo.price << endl;
Lamborghini Aventador;
Aventador=Gallardo;
cout << "Lamborghini Aventador  Specifications : " << endl;
cout << "Lamborghini Aventador color : \n" << Gallardo.color << endl;
cout << "Lamborghini Aventador horse power :\n" << Gallardo.hp << endl;
cout << "Lamborghini Aventador price :\n" << Gallardo.price << endl;
return 0;
}
