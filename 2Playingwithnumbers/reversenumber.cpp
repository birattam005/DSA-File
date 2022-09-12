#include <iostream>
using namespace std;

/* reverse variable create kiye, jiska value (reverse=0) hai.
while loop check kare ga ki kya i ki value 0 se jada hai , agar ha to wo aage check kare ga.
For example i= 234;
reverse = reverse*10 + i%10
        = 0*10 + 4          { i= 234, 234 divide by 10 23 jise reminder = 4 hai}
                            {so i%4 store reminder which is 4}
Now, i=i/10         { 234 divide by 10 is 23.4 but (i) is integer so it only store 23}

Then loops repeat , this time
reverse= reverse*10+ i%10
        = 4*10+3            { this time i== 23}

i=i/10 
 = 23/10    =2.3 = 2

 this loops repeat untill coditon is false
*/


int main(){

    int i;
    cin>> i;
    int reverse = 0;  

    while (i > 0)
    {
        reverse = reverse * 10 + i % 10;
        i = i / 10;             // it replace i++
    }
    cout << " Reverse of given number is : " << reverse << endl;

    return 0;
}

// USING FOOR LOOPS

/*
#include <iostream>
using namespace std;

int main(){
    int i;
    cin>> i;

    int reverse = 0;

    for(; i>0; i=i/10){
        reverse= reverse*10 + i%10;
    }
    cout<< reverse;
    return 0;
}

*/