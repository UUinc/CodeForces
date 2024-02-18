//https://codeforces.com/contest/1932/problem/B
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=1; i<n; i++)
        {
            int j=2;
            int tmp = a[i];
            while(tmp <= a[i-1])
            {
                tmp = a[i];
                tmp *= j++;
            }
            a[i] = tmp;
        }

        cout<<a[n-1]<<"\n";
    }

    return 0;
}