#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int cap,int n, int pos, int key){
    if(n == cap)
    return n;

    int ind = pos-1;
    for(int i =n-1; i>= ind; i--){
        arr[i+1]= arr[i];
    }
    arr[ind]= key;
    return n+1;
}

int main(){

    int arr[5]= {1,2,4,5};
    int cap = 5; int n = 4;
    cout<< " Before Inserion :"<< endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
    int pos = 3; int key = 3;
    n = insert(arr,cap,n,pos,key);
    cout<< " after Insertion :"<< endl;

    for(int i = 0 ; i<n; i++){
        cout<< arr[i]<< " ";
    }
    

    return 0 ;
}