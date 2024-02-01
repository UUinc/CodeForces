//https://codeforces.com/contest/231/problem/A
#include<iostream>

using namespace std;

int main()
{
    int n, c=0;
    cin>>n;
    while(n--)
    {
        int m1, m2, m3;
        cin>>m1>>m2>>m3;
        int r = m1 + m2 + m3;
        if(r > 1) c++;
    }
    cout<<c;
    return 0;
}