/*
Author : Mihir Raj Singh
Title : Pattern:
                1   2   3   4
                1   2   3   4
                1   2   3   4
                1   2   3   4

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
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}