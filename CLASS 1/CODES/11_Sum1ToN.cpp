/*
Author : Mihir Raj Singh
Title : Sum 1 To N
Date & Time : 2023-12-29 14:21:02
*/

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += i + 1;
    }
    cout << "Sum Is: " << sum << endl;
    return 0;
}