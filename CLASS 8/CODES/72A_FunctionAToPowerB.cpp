/*
Author : Mihir Raj Singh
Title : A to power B
Date & Time : 2024-05-20 19:44:46
*/
// Can I Calculate Cube?

#include <iostream>
using namespace std;

// 2nd Way
/*

void aPowerB()
{
    int a,b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    int power = 1;
    for (int i = 0; i < b; i++)
    {
        power = power * a;
    }
cout << "Power is: " << power;
}
*/

// Function Definitions
int aPowerB(int num1, int num2)
{
    int power = 1;
    for (int i = 0; i < num2; i++)
    {
        power = power * num1;
    }
    return power;
}

int main()
{
    int a, b, result;

    cout << "Enter the value of A & B: ";
    cin >> a >> b;

    result = aPowerB(a, b);
    cout << "Result is: " << result << endl;

    return 0;
}