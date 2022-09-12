#include<iostream>
using namespace std;

/* loop will run from i=2 to t<= n
*/

int fact(int n){
    int factorinal= 1;

    for(int i=2; i<=n; i++){
         factorinal*=i;         // every i ki value me multiply hote rahe ga
    }
    return factorinal;
}

int main (){
    
    int n;
    cin>> n;
    
    int ans= fact(n);
    cout<< ans;
    return 0;
}