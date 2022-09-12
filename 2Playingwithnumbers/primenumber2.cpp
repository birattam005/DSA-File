#include<iostream>
using namespace std;

/* Prime numbers wahi hote hai jis k 2 he factors hote hai. So (int count) factor store karta
hai, loop n ki value tak chale ga, so (i<=n). Then, (n) divide by (i) me reminder zero hoga,

*/

int main (){
    int n;
    cin>> n;

    int count=0;

    int i=1;

    while(i<=n){
        if(n%i==0)
        count++;
        i++;
    }
    if(count==2){
        cout<< " Prime";
    }
    else{
        cout<< "Non-Prime"<< endl;
    }
    return 0;
}