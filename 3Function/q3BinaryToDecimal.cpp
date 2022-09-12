#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int n){
    int ans= 0;
    
int i= 0;
while(n!=0){
    int rem = n%10;
    ans= ans+ (rem*pow(2,i));
    i++;
    n=n/10;
}
    return ans;
}

int main (){
    int n;
    cin>> n;

    cout<< binaryToDecimal(n)<< endl;
    return 0;
}