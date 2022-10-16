#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {10, 12, 14, 7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 1;
    for(int i =0; i<n; i++){
        int count = 1;
        for(int j = i+1; j< n; j++){
            if((arr[j]%2 == 0 && arr[j-1]%2 != 0) || (arr[j]%2 != 0 && arr[j-1]%2 == 0))
            count++;
            else
            break;
        }
        res = max(res,count);
    }
    
    cout<< res;
    return 0;
}