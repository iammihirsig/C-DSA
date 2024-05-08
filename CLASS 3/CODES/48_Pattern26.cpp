/*
Author : Mihir Raj Singh
Title : Pattern :

                        *
                        *  *
                        *  *  *
                        *  *  *  *
                        *  *  *  *  *
                        *  *  *  *
                        *  *  *
                        *  *
                        *


Date & Time : 2024-02-06 12:40:38
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
            cout << "*  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    return 0;
}