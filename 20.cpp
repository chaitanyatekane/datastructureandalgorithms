// Print hollow rectangle pattern using stars (pattern questions)

/*
Rows :- 5
Columns :- 4

* * * *
*     *
*     *
*     *
* * * *

*/

#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter Number of Rows :- ";
    cin>>row;
    cout<<"Enter Number of Columns :- ";
    cin>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}