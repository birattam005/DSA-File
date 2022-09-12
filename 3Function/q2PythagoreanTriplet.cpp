                            // Pythagorean Triplet 

#include<iostream>
using namespace std;

int main (){
    int a, b , c;
    cin>> a >> b>> c;

    int max= a;
    if(b>max){
        max=b;
    }
    if (c>max){
        max= c;
    }

    if(max==a){
        bool flag = (a*a) == ((b*b) + (c*c));
        cout << flag << endl;
    }
    if(max==b){
        bool flag = (b*b) == ((a*a) + (c*c)) ;
        cout << flag << endl;
    }
    if(max==c){
        bool flag = (c*c) == ((b*b) + (a*a));
        cout << flag << endl;
    }
    return 0;
}