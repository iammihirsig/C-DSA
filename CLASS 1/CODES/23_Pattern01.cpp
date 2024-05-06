/*
Author : Mihir Raj Singh
Title : Pattern
                9   8   7
                6   5   4
                3   2   1
Date & Time : 2024-01-05 10:27:45
*/

#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;

    cin >> n;
    count = n * n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }

    return 0;
}