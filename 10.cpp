// Write a program to check if a given number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter Number :- ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime";
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime-Number";
    }

    return 0;
}