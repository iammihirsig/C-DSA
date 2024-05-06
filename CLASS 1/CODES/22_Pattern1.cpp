/*
Author : Mihir Raj Singh
Title : Pattern
                1   2   3
                4   5   6
                7   8   9
Date & Time : 2023-12-31 12:10:19
*/

#include <iostream>
using namespace std;

int main()
{

    int n, count = 1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }

    return 0;
}