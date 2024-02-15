//https://codeforces.com/contest/1929/problem/B
#include<iostream>
#include<cmath>

using namespace std;

int minCells(int n, int k)
{
    int max = 4 * n - 2;

    if(k > max-2)
    {
        int toAdd = k-max+2;
        int r = ceil((k-toAdd)/2.0);
        return r+toAdd;
    }
    else
    {
        int r = ceil(k/2.0);
        return r;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<minCells(n, k)<<"\n";
    }
    
    return 0;
}