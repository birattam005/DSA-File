#include<bits/stdc++.h>
using namespace std;



int main(){

    int arr[]= {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;

    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){

            if(arr[j]>arr[i]){
            int diff = arr[j]-arr[i];
            v.push_back(diff);
            }
        }
    }
    cout << " max diff : ";
     cout<< *max_element(v.begin(),v.end());
    return 0;
}