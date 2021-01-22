// Write a program to find maximum or minimum element of an array, take number of elements from user.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number Of Elements In Array :- ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }

    cout<<"Maximum Number is "<<maxNo<<endl;
    cout<<"Minimum Number is "<<minNo<<endl;
    
    return 0;
}