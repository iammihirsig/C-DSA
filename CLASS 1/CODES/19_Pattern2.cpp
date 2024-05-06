/*
Author : Mihir Raj Singh
Title : Pattern :
                    1   1   1   1
                    2   2   2   2
                    3   3   3   3
                    4   4   4   4
Date & Time : 2023-12-30 16:09:30
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
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}