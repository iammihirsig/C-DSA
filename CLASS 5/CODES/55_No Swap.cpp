/*
Author : Mihir Raj Singh
Title : Some more basic concepts
Date & Time : 2024-05-11 20:09:23
*/

#include <iostream>
using namespace std;

int main()
{

    int a = 2, b = 3;

    cout << "Before Swapping: " << a << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping: " << a << b << endl;
    // can also be done using 3rd variable
    return 0;
}