/*
Author : Mihir Raj Singh
Title : Pattern Best Approach - Never Change Loop (1 to n) to (n to 1), just change the formula.
                *   *   *
                *   *
                *
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
        for (int j = 0; j < n - i; j++)

        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}