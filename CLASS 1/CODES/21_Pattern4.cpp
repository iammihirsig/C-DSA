/*
Author : Mihir Raj Singh
Title : Pattern:
                4   3   2   1
                4   3   2   1
                4   3   2   1
                4   3   2   1
Date & Time : 2023-12-30 17:41:11
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
            cout << n - j << " ";
        }
        cout << endl;
    }

    return 0;
}