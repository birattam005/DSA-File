#include<bits/stdc++.h>
using namespace std;

int commonDivisor(int a, int b){
    int res = min(a,b);

    while(res> 0){
        if(a%res == 0 && b%res == 0){
            break;
        }
        res --;
    }
    return res;
}

int main(){
    int a, b;
    cin>> a; cin>> b;

    int ans = commonDivisor(a,b);
    cout<< ans;
    return 0;
}