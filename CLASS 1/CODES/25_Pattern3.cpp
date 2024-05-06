/*
Author : Mihir Raj Singh
Title : Pattern
                1
                2   2
                3   3   3
                4   4   4   4
Date & Time : 2023-12-31 12:52:26
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
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}