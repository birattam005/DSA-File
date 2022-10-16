#include<bits/stdc++.h>
using namespace std;

int max(int *arr,int n){
    int max = arr[0];

    for(int i = 0; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
            //return arr[i];
        }
        //return max;
    }
    return max;
}

int main(){

    int arr[5]= {2,10,5,6,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = max(arr,n);
    cout<< ans;

    
    return 0;
}