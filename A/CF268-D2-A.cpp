//https://codeforces.com/contest/268/problem/A
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    pair<int, int> t[n];
    for(int i=0; i<n; i++)
    {
        int h,a;
        cin>>h>>a; 
        t[i] = {h,a};
    }

    int c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
                continue;

            if(t[i].first == t[j].second)
                c++;
        }
    }

    cout<<c<<"\n";
    return 0;
}