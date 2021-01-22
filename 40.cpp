// Linear Search In Array (Take Size Of Array From User & Find Key Using Linear Search)


#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter Size Of Array :- ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter Key :- ";
    cin>>key;
    cout<<linearSearch(arr, n, key)<<endl;
    return 0;
}




