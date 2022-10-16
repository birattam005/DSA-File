#include<bits/stdc++.h>
using namespace std;

int getSum(int n){
    // base case

    if(n == 0)
    return 0;

    return n + getSum(n-1);
}

int main(){

    int n; cin>> n; 
    int ans = getSum(n);
    cout<< ans;

    return 0;
}