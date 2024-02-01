//https://codeforces.com/contest/228/problem/A
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n=4;
    set<int> s;
    while(n--)
    {
        int v;
        cin>>v;
        s.insert(v);
    }

    cout<<4-s.size()<<"\n";

    return 0;
}