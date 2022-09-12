#include<iostream>
#include<math.h>
using namespace std;

/* An Armstrong number of three digits is an integer such that the sum of the cubes 
   of its digits is equal to the number itself. 
   For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
*/ 

/*  (int orifinali) is create for to check final value is eQual to original value or not.
    int aramstrong= 0

    Now, 
    while loop check condition given i is greater than 0 or not,, if yes it goes to nxt
    statement.

    int reminder = i%10 , it will store the reminder of given i value after divide by 10
    e.g = i=371 now divide by 10 ,, reminder left 1.

    aramstrong+= pow(reminder,3);       {pow function used to find power vaue of number}
             0+= pow(1,3)

    Loops continue reapting untill conditon is false

    Then, 
        Conditon statement compare the value of oringinal i to value of i after loop
        if it match , so value is ARAMSTRONG NUMBER
        usning 
        if(aramstrong==originali)

*/


int main (){

    int i;
    cin>> i;
    
    int originali= i;
    int aramstrong =0;

    while (i>0)
    {
        int reminder = i%10;

        aramstrong+= pow(reminder,3);
        i=i/10;
    }
    if (aramstrong==originali){
        cout<< " Aramstrong number";
    }
    else{
        cout<< " Not Aramstrong number";
    }
    
    
    return 0;
}