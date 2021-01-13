// Print half pyramid pattern using stars (pattern questions)

/*
n=5

*
* * 
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n :- ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
