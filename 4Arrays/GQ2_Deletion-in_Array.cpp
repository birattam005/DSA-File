#include<bits/stdc++.h>
using namespace std;

int deleteion(int arr[], int n, int key){

// if key is found
int i;
    for(int i = 0; i<n; i++){
        if(arr[i]== key)
            break;
        }
    // for key not found;
        if(i == n)
        return n;

    for(int j = i; j<n-1;j++){
        arr[j] = arr[j+1];

    }
    return n-1;
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int n = 5; int key = 3;
    cout<< " Before deletion :"<< endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    //int key = 3;
    n = deleteion(arr,n,key);
    
    cout<< " After deletion"<< endl;

    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}