// Write a program to find whether an element is present in 2-D array or not

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter Size Of 2-D Array :- ";
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix is :- \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int x;
    cout<<"Enter An Element Which You Want To Find :- ";
    cin>>x;

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<" \n";
                flag=true;
            }
        }
    }

    if(flag){
        cout<<"Element is Found\n";
    }else{
        cout<<"Element Not Found\n";
    }

    return 0;
}