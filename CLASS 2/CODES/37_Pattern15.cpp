/*
Author : Mihir Raj Singh
Title : Pattern
                D
                C   D
                B   C   D
                A   B   C   D

Date & Time : 2023-12-31 13:04:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    char ch = 'A';

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // cout << char(ch - 1 + n - i + j) << " ";
            cout << char(ch + n - i + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}