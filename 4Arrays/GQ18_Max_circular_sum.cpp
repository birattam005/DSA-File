#include<bits/stdc++.h>
using namespace std;
// NOt complete Solution
int main(){
int arr[] = {5,-2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);

int cMax = 0;
int cSum =0;

for(int i =0; i< n ; i++){
    cSum += arr[i];

    if(cSum > cMax){
    cMax = cSum;}

    if(cSum < 0){
    cSum = 0;}
}
cout << cMax;
    return 0;
}