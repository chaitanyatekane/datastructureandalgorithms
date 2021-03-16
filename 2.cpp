// Program to find maximum, minimum among two numbers 

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter Value of First Number :- "<<endl;
    cin>>a;
    cout<<"Enter Value of Second Number :- "<<endl;
    cin>>b;

    if(a==b){
        cout<<"Both Numbers Are Equal!";
    }else if(a>b){
        cout<<"First Number is Maximum And Number is "<<a<<endl;
        cout<<"Second Number is Minimum And Number is "<<b<<endl;
    }else{
        cout<<"Second Number is Maximum And Number is "<<b<<endl;
        cout<<"First Number is Minimum And Number is "<<a<<endl;
    }
    return 0;
}
