#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){

    // base case 

    if(size ==0 || size == 1){
        return true;
    }
    
    if(arr[0] > arr[1]){
        return false;
    }
    else {
        bool part = isSorted(arr+1, size-1);
        return part ;
    }
   // return part ;

    
}

int main(){
    
    int arr[5]= {2,10,5,6,7};
    int size = 5;

    int ans = isSorted(arr,size);

    if(ans){
        cout<< "array is sorted";
    }
    else{
        cout<< "array is not sorted";
    }


    return 0;
}