// Program to find maximum, minimum among two numbers.

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int max, min;
    cout << "Enter First Number :- ";
    cin >> n1;
    cout << "Enter Second Number :- ";
    cin >> n2;

    if (n1 > n2)
    {
        max = n1;
        min = n2;
        cout << "Maximum = " << max << endl;
        cout << "Minimum = " << min << endl;
    }
    else
    {
        min = n1;
        max = n2;
        cout << "Maximum = " << max << endl;
        cout << "Minimum = " << min << endl;
    }
}