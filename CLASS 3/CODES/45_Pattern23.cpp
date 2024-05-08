/*
Author : Mihir Raj Singh
Title : Pattern Best Approach - Never Change Loop (1 to n) to (n to 1), just change the formula.
                _   _   _   1
                _   _   2   3
                _   4   5   6
                7   8   9   10
Date & Time : 2023-12-31 13:04:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        // For Space
        for (int j = 0; j < n - 1 - i; j++)

        {
            cout << "_ ";
        }

        // For Star/ Number
        for (int k = 1; k <= i + 1; k++)

        {
            cout << count + 1 << " ";
            count += 1;
        }
        cout << endl;
    }

    return 0;
}