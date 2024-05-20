/*
Author : Mihir Raj Singh
Title : exit(0) usecase;
Date & Time : 2024-05-17 20:41:48
*/
#include <iostream>
using namespace std;

int main()
{

    int age;
    cin >> age;

    for (int i = 0; i < 5; i++)
    {
        switch (age)
        {
        case 18:
            cout << "age is 18" << endl;
            continue;

        case 12:
            cout << "age is 12" << endl;

        case 1:
            cout << "age is 1" << endl;
        }
    }
    cout << "last stage pe hai" << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{

    int age;
    cin >> age;

    for (int i = 0; i < 5; i++)
    {
        if (age > 12)
        {
            cout << "good" << endl;
            continue;
        }
        cout << "loop ke bahar hai" << endl; //unreachable
    }
    cout << "last stage pe hai" << endl;
    return 0;
}
*/