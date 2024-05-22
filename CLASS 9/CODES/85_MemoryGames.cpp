/*
Author : Mihir Raj Singh
Title : Memory games
Date & Time : 2024-05-22 21:16:49
*/

#include <iostream>
using namespace std;



void increArray(int arr[], int size)
{
    arr[0] = 90;
    cout << "Array Function Ke Andr: " << arr[0] << endl;
}

void incrementA(int value)
{
    cout << "Inside incrementA function: ";
    cout << ++value;
    cout << endl;
}

int main()
{

    // int a = 2;
    // cout << a << endl;
    // cout << &a;

    int a = 2;
    incrementA(a);

    cout << "Inside main function: ";
    cout << a;
    cout << endl;

    // Array Case

    int arr[5] = {56, 0, 0, 0, 0};
    cout << "Before calling function: " << arr[0] << endl;
    increArray(arr, 5);
    cout << "Main Function Ke Andr: " << arr[0] << endl;

    return 0;
}