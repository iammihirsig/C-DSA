/*
Author : Mihir Raj Singh
Title : Pattern :

                    _  _  _  _  *
                    _  _  _  *  *
                    _  _  *  *  *
                    _  *  *  *  *
                    *  *  *  *  *
                    _  *  *  *  *
                    _  _  *  *  *
                    _  _  _  *  *
                    _  _  _  _  *
                    _  _  _  _  _



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
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "_  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "_  ";
        }
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    return 0;
}