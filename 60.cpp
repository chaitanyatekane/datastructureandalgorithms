// Given an array a[] of size n. Output sum of each subarray of the given array


// example :- 1 2 2 
// solution :- 1 12 122 2 22 2
//             1 3   5  2  4 2
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter The Size Of Array :- ";
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int curr = 0;

    for(int i=0; i<n; i++){
        curr = 0;
        for(int j=i; j<n; j++){
            curr += a[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}