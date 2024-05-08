/*
Author : Mihir Raj Singh
Title : Pattern Best Approach
                _   _   _   1
                _   _   1   2   1
                _   1   2   3   2   1
                1   2   3   4   3   2   1
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

        // For Space
        for (int j = 0; j <= n - i - 1; j++)

        {
            cout << "_ ";
        }

        // For Number Pattern 1
        for (int k = 1; k <= i; k++)

        {
            cout << k << " ";
        }

        // For Number Pattern 2
        for (int l = 0; l < i + 1; l++)
        {
            cout << i + 1 - l << " ";
        }

        cout << endl;
    }

    return 0;
}