/*
Author : Mihir Raj Singh
Title : Pattern
                A   B   C   D
                B   C   D   E
                C   D   E   F
                D   E   F   G
Date & Time : 2023-12-31 13:04:15
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    char ch = 65;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << char(ch + i + j) << " ";
        }
        cout << endl;
    }

    return 0;
}