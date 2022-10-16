#include<bits/stdc++.h>
using namespace std;

int ropeCut(int l, int a, int b, int c){
    if(l == 0)
    return 0;
    
    if(l<0)
    return -1;

    int res = max(ropeCut(l-a,a,b,c), ropeCut(l-b, a, b, c), ropeCut(l-c, a, b, c));

    if(res == -1)
    return -1;

    return res+1;
}

int main(){
    int l; cout<< " Enter the value of l : "<< endl;    cin>> l;
    int a; cout<< " Enter the value of a : "<< endl;    cin>> a;
    int b; cout<< " Enter the value of b : "<< endl;    cin>> b;
    int c; cout<< " Enter the value of c : "<< endl;    cin>> c;

    int ans = ropeCut(l, a, b, c);
    cout<< ans;
    
    return 0 ;
}