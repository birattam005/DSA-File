#include<bits/stdc++.h>
using namespace std;

int countSum(int n){
    int sum = 0;
    int rem;

    while(n!=0){
        rem = n%10;
        sum += rem;
        n = n/10;
    }
    return sum;

}
int main(){

    int n; cin>> n;
    int ans = countSum(n);
    cout<< ans;
    return 0;
}