// Print zig-zag pattern using stars (pattern questions)

/*
n=9

    *       *     
  *   *   *   *   
*       *       * 

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Value of n :- ";
    cin>>n;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            if(((i+j)%4==0) || ((i==2) && (j%4==0))){
                cout<<"*"<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}