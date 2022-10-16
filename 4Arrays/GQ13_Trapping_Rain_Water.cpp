#include <bits/stdc++.h>
using namespace std;
int trapeWater(int arr[], int n)
{
    int res = 0;
    // create lmax[] and rmax[] of size n
    for(int i =1; i< n-1;i++){
        int res = 0;
    int lmax[n], rmax[n];
    // for finding left max
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    // for finding right max
    rmax[n-1] = arr[n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], lmax[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
    }
    return res;
}
int main()
{
    int arr[] = {5, 0, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = trapeWater(arr, n);
    cout<< ans;
    return 0;
}