#include<iostream>
using namespace std;

int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        cout << " Enter elements " << endl;
        cin >> a[i];
    }
    int max = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == max)
            max = a[i];
        cout << " Max value is :" << max;
    }
    return 0;
}