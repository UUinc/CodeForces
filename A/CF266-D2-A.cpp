//https://codeforces.com/contest/266/problem/A
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;

    int count = 0;
    for(int i=1; i<n; i++)
    {
       if(s[i-1] == s[i])
            count++;
    }

    cout<<count;

    return 0;
}