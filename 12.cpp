// Write a program to print all odd numbers till n.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number :- ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}