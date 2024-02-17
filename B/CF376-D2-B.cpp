//https://codeforces.com/contest/376/problem/B
#include<iostream>

using namespace std;

int sum(int* a, int* b)
{
    int c = 0;
    for(a; a<b; a++)
    {
        if(*a > 0)
        {
            c+= *a;
        }
    }
    return c;
}

int main()
{
    int n,m;
    cin>>n>>m;

    int T[n+1] = {0};
    while(m--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        T[a] += c;
        T[b] -= c; 
    }

    cout<<sum(T+1, T+n+1);

    return 0;
}