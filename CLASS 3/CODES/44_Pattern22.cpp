/*
Author : Mihir Raj Singh
Title : Pattern Best Approach - Never Change Loop (1 to n) to (n to 1), just change the formula.
                1   2   3   4
                _   2   3   4
                _   _   3   4
                _   _   _   4
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

        // For Number
        for (int k = 0; k < n - i; k++)

        {
            cout << i + k + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}