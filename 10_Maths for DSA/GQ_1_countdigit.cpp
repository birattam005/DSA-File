#include<bits/stdc++.h>
using namespace std;

int countDigits(int z){
    int res = 0;

    while(z>0){
        z = z/10;
        res++;
    }
    return res;
}

int main(){

int x ;
cout<< " Enter Your  number : ";
cin>> x;

int ans;

ans = countDigits(x);
cout<< ans;
    return 0;
}