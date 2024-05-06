/*
Author : Mihir Raj Singh
Title : 1 To N Odd No
Date & Time : 2023-12-29 14:19:04
*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i += 2)
    {
        cout << i+1 << "\t";
    }

    return 0;
}