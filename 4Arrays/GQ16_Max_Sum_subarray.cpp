#include<bits/stdc++.h>
using namespace std;
int maxSum(int *arr, int n){
    int maxS = 0;
    int currSum = 0;

    for(int i =0; i<n; i++){
        currSum += arr[i];

        if(currSum > maxS)
        maxS = currSum;

        if(currSum < 0)
        currSum = 0;
    }
    return maxS;
}
int main(){
    int arr[]= {1,-2,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = maxSum(arr,n);
    cout<< ans;
    return 0;
}