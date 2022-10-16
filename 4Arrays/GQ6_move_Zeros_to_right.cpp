#include<bits/stdc++.h>
using namespace std;

int main(){
     int arr[10] = {0,1,2,0,0,5,0,4,3,0};
     int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int s =0, e= n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}