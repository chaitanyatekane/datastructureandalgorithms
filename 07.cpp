// Program to display multiplication table upto 10.

#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter A Number Of Which You Want Table Of :- ";
    cin >> num;

    for (i = 1; i <= 10; i++)
    {
        cout << num << "x" << i << "=" << num * i << endl;
    }
    return 0;
}