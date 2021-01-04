// Write a program to write a simple calculator.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char op;
    cout << "Enter First Number :- ";
    cin >> n1;
    cout << "Enter Second Number :- ";
    cin >> n2;

    cout << "Enter Operator :- ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
        break;
    case '%':
        cout << n1 << "%" << n2 << "=" << n1 % n2 << endl;
        break;

    default:
        cout << "Operator Not Found" << endl;
        break;
    }
    return 0;
}