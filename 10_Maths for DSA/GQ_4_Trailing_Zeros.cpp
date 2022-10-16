#include<bits/stdc++.h>
using namespace std;

int countZeors(int n){
    int fact =1;
    int res =0 ;
    for(int i =2; i<=n; i++){
        fact = fact*i;

       // int res =0;
        while(fact%10 == 0){
            res++;
            fact = fact/10;
        }
       // return res;
    }
    return res;
}

int main(){

    int n; cin>> n;
    int ans = countZeors(n);
    cout<< ans;
    return 0;
}