// Program to check if number is even or odd.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter Any Number :- ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Number Is Even Number\n";
    }
    else
    {
        cout << "Number Is Odd Number\n";
    }
}