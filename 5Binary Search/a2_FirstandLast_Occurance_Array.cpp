#include<iostream>
using namespace std;

int firstOc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans= -1;

    int mid = (start + end)/2;

    while(start<=end){

        if(arr[mid] == key){
                ans = mid;
                end = mid -1;
        }
         else if (key > arr[mid]){   // Right me jaaoo
            start = mid + 1;
         }
          else if(key< arr[mid]){   // left me jaaoo
            end = mid - 1;
        }
        
        mid = start +(end - start)/2;
    }
    return ans;
} 

int lastOc(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans= -1;

    int mid = (start + end)/2;

    while(start<=end){

        if(arr[mid] == key){
                ans = mid;
                start = mid + 1;
        }
         else if (key > arr[mid]){   // Right me jaaoo
            start = mid + 1;
         }
          else if(key< arr[mid]){   // left me jaaoo
            end = mid - 1;
        }
        
        mid = start +(end - start)/2;
    }
    return ans;
}  

int main (){
    
    int even[9]={1,2,3,4,3,3,3,3,9};

    cout<< " First Occurance of 3 is : "<< firstOc(even, 9,3)<< endl;
    
    cout<< " Last occurance of 3 is : "<< lastOc(even, 9, 3)<< endl;
    return 0;
}