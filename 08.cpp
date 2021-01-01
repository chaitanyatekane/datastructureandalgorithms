// Program to add only positive numbers.

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter Number :- ";
    cin >> num;

    while (num >= 0)
    {
        sum = sum + num;
        cout << "Enter Number :- ";
        cin >> num;
    }
    cout << "Sum is " << sum;

    return 0;
}