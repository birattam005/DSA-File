#include<bits/stdc++.h>
using namespace std;

void printnumbers(int n){
    if(n == 0){
        return ;
    }
    printnumbers(n-1);
    cout<< n<< " ";
    //printnumbers(n-1);
   
}


int main(){
    int n; cin>> n;
    printnumbers(n);
  
    return 0;
}