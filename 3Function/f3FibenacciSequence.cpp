#include <iostream>
using namespace std;
/* fib() called in which t1 =0 and t2 = 1, and int nextTerm is created
    Now,
        using loop , where i will check the number from 1 to n
    then,
        nextTerm stores the sum value of t1 and t2
        then t1 stores the value of t2 and t2 stroes the value of nextTerm

*/
void fib(int n)
{

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
};
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}