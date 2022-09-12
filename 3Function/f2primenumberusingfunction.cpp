#include <iostream>
#include <math.h>
using namespace std;

/*  Step 1- main() excute
    Step 2- take the value of a and b
    Step 3 - Loop start, it check the condition from a to b. means for every i.
    Step 4- isPrime() has created
    Step 5- bool isPrime(int num) is used to check. Here i= num
    Step 6- inside bool isPrime(), for loop is used to check wheater a number is prime 
            or not.
*/

bool isPrime(int num)                           // step 5
{
    for (int i = 2; i < sqrt(num); i++)         // step 6
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()                                  //step1
{
    int a, b;
    cin >> a >> b;                          // step 2

    for (int i = a; i <= b; i++)            // step 3
    {
        if (isPrime(i))                     // step 4
        { // It will check for every i value
            cout << i << endl;
        }
    }

    return 0;
}