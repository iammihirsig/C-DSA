/*
Author : Mihir Raj Singh
Title : Min Max In Array
Date & Time : 2024-05-22 20:50:06
*/

#include <iostream>
#include <limits.h>
using namespace std;

void minDedo(int arr[], int size)
{
    cout << "Minimum Value In The Given Array Is: ";

    // logic
    // int maxii = 50;
    int maxii = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < maxii)
        {
            maxii = arr[i];
        }
    }
    cout << maxii << endl;
}

void arrLelo(int arr[], int size)
{
    cout << "Array ka element dedo bhai: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{

    int arr[100], n;

    cout << "Enter the size of array: ";
    cin >> n;
    arrLelo(arr, n);
    minDedo(arr, n);

    return 0;
}