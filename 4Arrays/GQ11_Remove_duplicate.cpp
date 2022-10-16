#include<bits/stdc++.h>
using namespace std;

int dup(int arr[], int n){

    int res = 1; 

    for(int i = 0; i<n; i++){
        if(arr[i] != arr[res-1])
        {
            arr[res]= arr[i];
            res++;
        }
    }
    return res;
}

int main(){

    int arr[]= {10,20,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = dup(arr,n);
    cout<< ans << " ";

    for(int i =0 ; i<n; i++){
        cout<< arr[i]<< " ";
    }
}