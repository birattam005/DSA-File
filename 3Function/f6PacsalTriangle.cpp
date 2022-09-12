#include <iostream>
using namespace std;

//          PASCAL TRIANGLE
//OUTPUT
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1 

/*          NOTES
    This question is similar to printing pattern and Binary Coefficinet
*/

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;          // or (factorial = factorial*i)
    }
    return factorial;
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)         // Loops for printing  pattern
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";//this formula of
        }                                                    // Binary Coefficient
        cout << endl;
    }

    return 0;
}