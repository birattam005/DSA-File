#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,-2,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = arr[0];
    for(int i = 0; i< n; i++){
        int count = 0;
        
        for(int j = i; j< n; j++){
            count = count + arr[j];
            
            res = max(res, count);
            }
    }

    
    cout<< res; 
    return 0;
}