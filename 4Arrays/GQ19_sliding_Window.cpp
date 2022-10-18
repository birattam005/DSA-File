#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n, int k){
    int maxi =0; 
    int sum =0;

    for(int i =0; i<k; i++){
        sum += arr[i];
        }
        maxi = sum;

        int i =0 , j =k;

        while(j<n){
            sum = sum - arr[i];
            sum += arr[j];
            i++;
            j++;
            maxi = max(maxi,sum);
        }
        return maxi;
}
int main(){
    int arr[]= {1,8,30,-5,20,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int ans = maxSum(arr,n,k);
    cout<< ans;
    return 0;
}