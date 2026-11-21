/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM = 5;

int main()
{
    int winningDigits[NUM];
    int player[NUM];
    int matches = 0;

    srand(time(0));

    for (int i = 0; i < NUM; i++)
    {
        winningDigits[i] = rand() % 10;
    }

    cout << "Enter five digits\n";
    for (int i = 0; i < NUM; i++)
    {
        cout << "Enter digit: ";
        cin >> player[i];
    }

    for (int i = 0; i < NUM; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matches = matches + 1;
        }
    }

    cout << "\nWinning digits: ";
    for (int i = 0; i < NUM; i++)
    {
        cout << winningDigits[i] << " ";
    }
    cout << '\n';

    cout << "Your digits:    ";
    for (int i = 0; i < NUM; i++)
    {
        cout << player[i] << " ";
    }
    cout << '\n';

    cout << "Matching positions: " << matches << '\n';

    return 0;
} 
