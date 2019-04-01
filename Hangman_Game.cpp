#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <ctime>
using namespace std;
int main()
        {
        cout << "\n*************************\n";
        cout << "\n     The Hangman Game\n";
        cout << "\n*************************\n";
        const int MAX_WRONG = 8; // maximum no. of incorrect guesses allowed
        vector<string> words; // collection of possible words to guess
        words.push_back("GUESS");
        words.push_back("HANGMAN");
        words.push_back("DIFFICULT");
        srand(static_cast<unsigned int>(time(0)));
        random_shuffle(words.begin(),words.end()); // picks up a random word to be guessed.
        const string THE_WORD = words[0]; // word to be guessed
        int wrong=0; // number of incorrect guesses
        string soFar(THE_WORD.size(),'-'); // words guessed so far
        string used = ""; // letters already guessed
        cout << "\nWelcome to The Hangman Classic .Goodluck !!\n";
        while ((wrong<MAX_WRONG)&&(soFar!=THE_WORD))
        {
                {
                        cout << "\n\nYou have " << (MAX_WRONG-wrong);
                        cout << " incorrect guesses left.\n";
                        cout << "\nYou have used the following letters:\n" << used << endl;
                        cout << "\nSo far, the word is :\n" << soFar << endl;
                 }
        char guess;
        cout << "\n\nEnter your Guess: ";
        cin >> guess;
        guess=toupper(guess);
        while (used.find(guess)!=string::npos)
                {
                        cout << "\n You have already guessed " << guess << endl;
                        cout << "Enter your guess: ";
                        cin >> guess;
                        guess=toupper(guess);
                }
        used+=guess;
        if (THE_WORD.find(guess)!=string::npos)
                {
                        cout << "That's right!! " << guess <<  " is in the word.\n";
                        for( int i = 0; i < THE_WORD.length() ; ++i )
                                {
                                        if(THE_WORD[i]==guess)
                                        {
                                                soFar[i]=guess;
                                        }
                                }

                }
        else
                {
                        cout << "Sorry, " << guess << " isn't the word.\n";
                        ++wrong;
                }
        }
        if (wrong == MAX_WRONG)
                {
                        cout << "\n You have been Hanged !\n";
                }
        else
                {
                        cout << "\n You guessed it..!!\n";
                }
        cout << "The word was : " << THE_WORD << endl;
        return 0;
        }
