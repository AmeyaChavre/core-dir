#include <iostream>
#include <string>
using namespace std;
int main()
{
// declaring the pointer
int* pAPointer;
// declaring and initializing a pointer
int* pScore=0;
// declaring variable
int score=1000;
// assigning the memory address of score to pointer pScore
pScore=&score;
// now printing the value of pScore memory address location which is now same as score
cout << "\nThe value of pScore is:\n" << *pScore << endl;
cout << "\nThe value of Score is:\n" << score << endl;
cout << "\nThe memory address of the Pointer pScore is:\n" << pScore << endl;
cout << "\nThe memory address of the variable score is:\n" << &score << endl;
// adding  500 to variable score
score+=500;
cout << "\nThe value of score now is:\n" << score << endl;
cout << "\nThe value now  stored at  pointer address pScore is:\n" << *pScore << endl;
// declaring a new score
int newScore=5000;
pScore=&newScore;
cout << "\nThe value of newScore is:\n" << newScore << endl;
cout << "\nThe value of pScore is:\n" << *pScore << endl;
cout << "\nThe value of memory address of newScore is:\n" << &newScore << endl;
cout << "\nThe value of memory address of pScore is:\n" << pScore << endl;
// storing a string object to pointer
string str="Hello";
string* pStr=&str;
cout << "\nThe value of string str is:\n" << str << endl;
cout << "\nThe value of pointer pStr is:\n" << *pStr << endl;
cout << "\nThe memory address of variable str is:\n" << &str << endl;
cout << "\nThe memory address of  pointer pStr is:\n" << pStr << endl;
cout << "\nThe size of string is:\n" << str.size() << endl;
cout << "\nThe size of value stored at pointer location pStr is:\n" << (*pStr).size() << endl;
return 0;
}
