// Write a program to check if a number is Armstrong number.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter Number :- ";
    cin >> n;

    int sum = 0;
    int originaln = n;
    while (n > 0) // while(n!=0)
    {
        int lastdigit = n % 10;
        sum = sum + pow(lastdigit, 3);
        n = n / 10;
    }

    if (sum == originaln)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not An Armstrong Number" << endl;
    }
    return 0;
}