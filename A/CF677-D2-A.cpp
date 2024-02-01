//https://codeforces.com/contest/677/problem/A
#include<iostream>

using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;

    int sum;
    for(int i=0; i<n; i++)
    {
        int f;
        cin>>f;
        if(f > h) sum+=2;
        else sum+=1;
    }
    cout<<sum;
    return 0;
}