/*
Author : Mihir Raj Singh
Title : Pattern :
                    *   *   *   *
                    *   *   *   *
                    *   *   *   *
                    *   *   *   *
Date & Time : 2023-12-30 15:59:05
*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}