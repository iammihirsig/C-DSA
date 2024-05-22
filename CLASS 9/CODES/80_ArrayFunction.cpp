/*
Author : Mihir Raj Singh
Title : Passing Array In Function
Date & Time : 2024-05-21 21:02:22
*/

#include <iostream>
using namespace std;

void arrLelo(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void arrDedo(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[10];
    // arrLelo(arr[0]);
    arrLelo(arr, 10);
    arrDedo(arr, 10);
    arrDedo(arr, 5);
    arrDedo(arr, 3);
    arrDedo(arr, 1);



    return 0;
}