/*
Author : Mihir Raj Singh
Title : Pattern
                1
                2   1
                3   2   1
                4   3   2   1
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
        for (int j = 0; j <= i; j++)
        {
            cout << (i + 1 - j) << " ";
            // cout << (i + j) - (j + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}