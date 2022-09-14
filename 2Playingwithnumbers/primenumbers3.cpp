#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;

    bool flag =0;

    for(int i=2; i<sqrt(n);i++){
        //bool flag =0;
        if(n%i==0){
            cout<<" Non-prime";
            flag =1;
            break;
        }
        if(flag == 0){
            cout<< "prime";
        }

    }
    return 0;
}