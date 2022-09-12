#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[][3], int row, int col){
    for (int row=0; row<3; row++){
        int sum =0;
        for(int col = 0; col<3; col++){
            sum+=arr[row][col];
        }
        cout<< sum<< " ";
    }
    cout<< endl;
}

int main (){
    
    int arr [3][3];

    // ROW WISE INPUT
    for(int i =0 ; i<3; i++){
        for(int j =0; j<3; j++){
            cin>> arr[i][j];
        }
    }
    printSum(arr,3,3);
    return 0;
}