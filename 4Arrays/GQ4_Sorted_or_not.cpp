#include<bits/stdc++.h>
using namespace std;

bool check(int *arr, int n){
    int z;
    for(int i =0 ; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[i]<arr[j])
            z = true;

            else
            z= false;
        }
    }
    return z;
}

int main(){

    int arr[5]= {1,2,3,6,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    bool ans = check(arr,n);
    cout<<ans;
    
    return 0;
}