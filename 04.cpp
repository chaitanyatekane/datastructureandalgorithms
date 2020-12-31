// Program to check if a triangle is scalene, isosceles or equilateral.

#include <iostream>

using namespace std;

int main()
{
    int side1, side2, side3;

    cout << "Enter Side One :- ";
    cin >> side1;
    cout << "Enter Side Two :- ";
    cin >> side2;
    cout << "Enter Side Three :- ";
    cin >> side3;

    if (side1 == side2 && side2 == side3)
    {
        cout << "Triangle is Equilateral!";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << "Triangle is Isosceles!";
    }
    else
    {
        cout << "Triangle is Scalene!";
    }
}