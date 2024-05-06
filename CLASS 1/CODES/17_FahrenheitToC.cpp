/*
Author : Mihir Raj Singh
Title : Fahrenheit To Celcius
Date & Time : 2023-12-30 15:47:28
*/

#include <iostream>
using namespace std;

int main()
{

    double fahrenheit, celcius;

    cin >> fahrenheit;

    cout << "Celcius is : " << ((fahrenheit - 32.0) * (5.0 / 9.0)) << endl;

    return 0;
}