/*
Author : Mihir Raj Singh
Title : Pattern Best Approach - Never Change Loop (1 to n) to (n to 1), just change the formula.
                *   *   *
                _   *   *
                _   _   *
Date & Time : 2023-12-31 13:04:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        // For Space
        for (int j = 0; j < i; j++)
        {
            cout << "_ ";
        }

        // For Star
        for (int k = 0; k < n - i; k++)

        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}