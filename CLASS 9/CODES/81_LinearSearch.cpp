/*
Author : Mihir Raj Singh
Title : Linear Search
Date & Time : 2024-05-22 20:15:46
*/

#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key is present at index: " << arr[i - 1] << ".";
            exit(0); // return;
        }
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

void arrLelo(int arr[], int size)
{
    cout << "Array ka value dedo bhai: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{

    int n, arr[100], key;

    cout << "Enter the size of array: ";
    cin >> n;
    // int arr[n]; //Very Bad Practice

    arrLelo(arr, n);

    cout << "Enter the Key: ";
    cin >> key;
    linearSearch(arr, n, key);

    return 0;
}