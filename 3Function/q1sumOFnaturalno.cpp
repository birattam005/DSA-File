            // SUM OF FIRST n NATURAL NUMBER4
#include<iostream>
using namespace std;

int main (){
    /*
    int n, i, sum=0;
    cout<< " Enter value of n : ";
    cin>> n;
    i=1;
    while(i<=n){
        sum= sum+i;
        i=i+1;
    }
    cout<< " Sum = "<< sum << endl; */

    int n, sum= 0;
    cout<< " Enter the value of n : ";
    cin>> n;

    for(int i= 1; i<=n ; i=i+1){
        sum= sum+i;
    }
    cout<< " Sum = "<< sum;
    return 0;
}            