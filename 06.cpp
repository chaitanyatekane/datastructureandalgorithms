// Program to find sum of natural numbers till n.

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, i;
    cout << "Enter Number :- ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is " << sum;

    return 0;
}