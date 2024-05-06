/*
Author : Mihir Raj Singh
Title : Factorial of N
Date & Time : 2023-12-29 14:22:55
*/

#include <iostream>
using namespace std;

int main()
{

    int n, factorial = 1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        factorial *= i + 1;
    }
    cout << factorial << endl;
    return 0;
}