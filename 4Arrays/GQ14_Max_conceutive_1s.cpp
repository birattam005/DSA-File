#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,0,1,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    vector<int> max;

    for(int i =0 ; i<n; i++){
        if(arr[i] == 1){
            count++ ;
            max.push_back(count);
        }
        if(arr[i]== 0){
           // break;
            count= 0;
        }
    }
     cout<< *max_element(max.begin(),max.end());

    return 0;
}