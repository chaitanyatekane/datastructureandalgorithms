// Write a program to print all the digits of a positive decimal
// number from right to left

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number :- ";
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        cout << rem << "";
        n = n / 10;
    }
    return 0;
}