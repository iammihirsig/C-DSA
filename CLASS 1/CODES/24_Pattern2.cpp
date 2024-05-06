/*
Author : Mihir Raj Singh
Title : Pattern
                *
                *   *
                *   *   *
                *   *   *   *
Date & Time : 2023-12-31 12:47:08
*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}