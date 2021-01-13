// Print half pyramid after 180 degree rotation using stars (pattern questions)

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
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"  ";
            }else{
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}