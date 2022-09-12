#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr[5]= {1,2,3,4,3};
    
    
    int ans = 0;

    for(int i=0; i<5; i++){
       ans= ans^ arr[i];
    }
    for(int i=1;i< 5; i++){
        ans= ans^i;
    }
        cout<<  ans;
    return 0;
}