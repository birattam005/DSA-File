#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i =0; i<n; i++){
        cout<< arr[i]<< " ";
        cout<< endl;
        }

        for(int i =0; i<n-1; i++){
        swap(arr[i],arr[i+1]);
        }

        for(int i =0; i<n; i++){
        cout<< arr[i]<< " ";
        }
    return 0;
}