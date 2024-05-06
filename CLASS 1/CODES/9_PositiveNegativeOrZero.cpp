/*
Author : Mihir Raj Singh
Title : Positive, Negative Or Zero
Date & Time : 2023-12-29 14:06:38
*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;
    if (n <= 0)
    {
        if (n < 0)
        {
            cout << "Negative\n";
        }
        else
        {
            cout << "Equal to 0\n";
        }
    }
    else
    {
        cout << "Positive\n";
    }

    return 0;
}