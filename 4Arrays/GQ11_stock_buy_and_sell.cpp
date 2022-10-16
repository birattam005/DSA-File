#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,5,3,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(arr[i]<arr[j]){
                cout<< " buy";
            } 
        }
    }
    return 0;
}