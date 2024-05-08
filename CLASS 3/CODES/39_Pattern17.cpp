/*
Author : Mihir Raj Singh
Title : Pattern
                _   _   _
                _   _   *
                _   *   *
Date & Time : 2023-12-31 13:04:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // Printing Space
    for (int i = 0; i < n; i++)
    {
        // For Space

        for (int j = 0; j < n - i; j++)
        {
            cout << "_ ";
        }

        // For Star
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}