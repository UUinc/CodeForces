//https://codeforces.com/contest/363/problem/B
#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int array[n+1];
    for(int i=1; i<=n; i++)
        cin>>array[i];

    int prefixsum[n+1] = {0};
    for(int i=1; i<=n; i++)
        prefixsum[i] = prefixsum[i-1] + array[i];

    int min = prefixsum[k];
    int res = 1;
    for(int i=k; i<=n; i++)
    {
        int value = prefixsum[i] - prefixsum[i-k];
        if(value < min)
        {
            min = value;
            res = i-k+1;
        }
    }

    cout<<res;

    return 0;
}