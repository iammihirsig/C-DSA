/*
Author : Mihir Raj Singh
Title : Pattern
                1
                2   3
                3   4   5
                4   5   6   7
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
        int value = i;
        for (int j = 0; j <= i; j++)
        {
            cout << value + 1 << " ";
            value++;
        }
        cout << endl;
    }

    return 0;
}