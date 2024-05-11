/*
Author : Mihir Raj Singh
Title : Fibonacii
Date & Time : 2024-05-11 20:18:56
*/

#include <iostream>
using namespace std;

int main()
{

    int a = 0, b = 1, n, sum;

    cout << "Enter n: ";
    cin >> n;

    cout << a << " " << b << " ";

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    return 0;
}

// We will solve this again while learning function in a better approach