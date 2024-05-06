/*
Author : Mihir Raj Singh
Title : 1 To N Even No
Date & Time : 2023-12-29 14:16:20
*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;
    for (int i = 1; i < n; i += 2)
    {
        cout << i+1 << "\t";
    }

    return 0;
}