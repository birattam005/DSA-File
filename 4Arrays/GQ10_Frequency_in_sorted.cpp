#include<bits/stdc++.h>
using namespace std;
void printfreq(int *arr, int n){
    int i=1,freq= 1;

    while(i<n){
        while(i<n && arr[i]== arr[i-1]){
            freq++;
            i++;
        }
        cout<< arr[i-1]<< " "<< freq;
        i++;
        freq = 1;
    }
    if(n ==1 || arr[n-1] != arr[n-2])
    cout<< arr[i-1]+" "+1;
}
int main(){
    int arr[]= {10,10,10,30,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);

    printfreq(arr, n);
    return 0;
}