#include <iostream>
using namespace std;

// 1                    1st time loop me , i ,(n)se kam or us k equal chale ge, or j(i) se kam or us k equal chale ge.
// 2 2               cout me i ki value print hogi. jo i ki value row numbers k equal hoga.
// 3 3 3        eg:
// 4 4 4 4          1st row me i= 1
// 5 5 5 5 5        2nd row me i= 2 2   and continue.

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}