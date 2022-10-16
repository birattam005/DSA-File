#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n){
    int cur_leader = arr[n-1];
    cout<< cur_leader<< " ";

    for(int i = n-2; i>= 0 ; i--){
        if(cur_leader < arr[i]){
            cur_leader = arr[i];
            cout<< cur_leader << " "; 
        }
    }
}

int main()
{

    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

     leader(arr, n);
    

    return 0;
}