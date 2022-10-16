#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    int res = 0;
    int original = n;
    while(n>0){
    res = res*10 + n%10;
    n = n/10;
    }
    if(original == res){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int n; cout<<" Enter your number :"; cin>> n;
    int ans = check(n);
    cout<< ans;
    return 0;
}