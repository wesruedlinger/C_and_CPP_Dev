#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

string CPUcompute()
{
    srand ( time(NULL) );
    vector <string> choices;
    choices.push_back("ROCK");
    choices.push_back("PAPER");
    choices.push_back("SCISSORS");
    string CPUchoice = choices[rand() % choices.size()];
    cout << "The CPU chose " << CPUchoice << "!" << endl;

    return CPUchoice;
}

int main()
{
    char r = 'r';
    char p = 'p';
    char s = 's';
    int win = 0, lose = 0, tie = 0;
    bool mainloop = true;
    char option;

    while(mainloop == true)
    {
    cout << "\nWins:" << win << " Loses:" << lose << " Ties:" << tie << endl;
    cout << "Choose your weapon's letter and hit enter on the keyboard!" << endl;
    cout << "R.) ROCK" << endl;
    cout << "P.) PAPER" << endl;
    cout << "S.) SCISSORS" << endl;
    cout << "Q.) QUIT" << endl;
    cout << ">>> ";
    cin >> option;

    if(option == 'q')
        {
            cout << "Good-bye!\n" << endl;
            mainloop = false;
        }
    else if(option == 'r' || 'R')
        {
            cout << "\nYou chose ROCK!" << endl;
            string CPUchoice = CPUcompute();
            if(CPUchoice == "ROCK")
            {
                cout << "You both TIE!" << endl;
                tie++;
            }
            else if(CPUchoice == "PAPER")
            {
                cout << "You LOSE!" << endl;
                lose++;
            }
            else if(CPUchoice == "SCISSORS")
            {
                cout << "You WIN!" << endl;
                win++;
            }
        }
    else if(option == 'p' || 'P')
        {
            cout << "\nYou chose PAPER!" << endl;
            string CPUchoice = CPUcompute();
            if(CPUchoice == "ROCK")
            {
                cout << "You WIN!" << endl;
                win++;
            }
            else if(CPUchoice == "PAPER")
            {
                cout << "You both TIE!" << endl;
                tie++;
            }
            else if(CPUchoice == "SCISSORS")
            {
                cout << "You LOSE!" << endl;
                lose++;
            }
        }
    else if(option == 's' || 'S')
        {
            cout << "\nYou chose SCISSORS!" << endl;
            string CPUchoice = CPUcompute();
            if(CPUchoice == "ROCK")
            {
                cout << "You LOSE!" << endl;
                lose++;
            }
            else if(CPUchoice == "PAPER")
            {
                cout << "You WIN!" << endl;
                win++;
            }
            else if(CPUchoice == "SCISSORS")
            {
                cout << "You both TIE!" << endl;
                tie++;
            }
        }
    else
        {
            cout << option << " -Is invalid!" << endl;
        }
    }
  return 0;
}
