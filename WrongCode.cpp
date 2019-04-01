#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <ctime>
using namespace std;
int main()
{
    vector<string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(),words.end());
    const string THE_WORD=words[0];
    const int MAX_WRONG=8;
    int wrong=0;
    string soFar(THE_WORD.size(),'-');
    string used="";
    cout << "\nWelcome to Hangman Classic. Goodluck!!\n";
    while((wrong<MAX_WRONG)&&(soFar!=THE_WORD))
    {
        {
        cout << "\nYou have :" << (MAX_WRONG-wrong) << " incorrect guesses left.\n";
        cout << "\nYou have already guessed :\n" << used << endl;
        cout << "\nSo Far the word is : \n" << soFar << endl;
        }
        char guess;
        cout << "\nEnter your guess:\n";
        cin >> guess;
        guess=toupper(guess);
        while(used.find(guess)!=string::npos)
        {
            cout << "You have already guessed : "<< guess << endl;
            cout << "Enter your guess:\n";
            cin >> guess;
            guess=toupper(guess);
        }
        used+=guess;
        if (THE_WORD.find(guess)!=string::npos)
        {
            cout << "That's right ! " << guess << " is in the word.\n";
            for (int i =0; i < THE_WORD.length(); ++i)
            {
                if (THE_WORD[i]==guess)
                {
                    soFar[i]==guess;
                }
            }
        }
        else
            {
                cout << "Sorry. " << guess << " isn't in the word.\n";
                ++wrong;
            }
    }
        if (wrong==MAX_WRONG)
            {
                cout << "\nYou have been hanged.\n";
            }
        else
            {
                cout << "\nYou have guessed it.\n";
            }
        cout << "\nThe Word was :\n" << THE_WORD << endl;
return 0;
}
