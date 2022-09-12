#include<iostream>
using namespace std;

//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
 
int main (){
    
    int row, col;

    cin>> row>> col;

    for(int i = 1; i<= row; i++){    // i= row, hai jo coloum k value tak chale ge,
                                     // fir jab coloum k value le lega fir,fir next row chala jaya ga
        for(int j= 1; j<= col; j++){
            cout<< " * ";
        }
        cout<< endl;
    }
    return 0;
}