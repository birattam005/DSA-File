#include<bits/stdc++.h>
using namespace std;

unsigned int fun(unsigned int x, unsigned int y){
    if(x> 0)
    return(x%y + fun(x/y,y));
    else return 0;
}
int main (){
    int x;
    cin>> x;
   int y;
   cin>> y;
    int ans = fun(x,y);
    cout<< ans;
    return 0;
}