/*
Author : Mihir Raj Singh
Title : Pattern Best Approach - Never Change Loop (1 to n) to (n to 1), just change the formula.
                _   _   1
                _   2   2
                3   3   3
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
        for (int j = 0; j < n - 1 - i; j++)

        {
            cout << "_ ";
        }

        // For Number
        for (int k = 0; k <= i; k++)

        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}