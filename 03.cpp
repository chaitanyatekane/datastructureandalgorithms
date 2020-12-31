// Program to find the maximum among three numbers.

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter First Number :- ";
    cin >> n1;
    cout << "Enter Second Number :- ";
    cin >> n2;
    cout << "Enter Third Number :- ";
    cin >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "Maximum Number is " << n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "Maximum Number is " << n2;
    }
    else
    {
        cout << "Maximum Number is " << n3;
    }
}