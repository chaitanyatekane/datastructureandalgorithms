// Program to check if a number is even or odd

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number Which You Want To Check :- ";
    cin>>n;
    if(n%2==0){
        cout<<"Number is Even Number!";
    }else{
        cout<<"Number is Odd Number!";
    }
    return 0;
}
