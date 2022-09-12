#include <iostream>
using namespace std;

//  *  *  *  *  *   jyse ki dhek rahe hai i=n hai. (here is n=5), so i>=1 hoga loops me
//  *  *  *  *      jisse  loop chale, or Fir dhek rahe hai ki i kam hote jaa raha hai, so
//  *  *  *         (i--), dusre loop me (j ki value i se always kam hai), so {(j<=i); j++}
//  *  *            fir normally star print kar lenge.
//  *

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }

        cout << endl;
    }

    return 0;
}