//https://codeforces.com/contest/1927/problem/C
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        set<int> c1;
        for(int i=0; i<n; i++)
        {
            int value;
            cin>>value;
            if(value <= k) 
            {
                c1.insert(value);
            }
        }

        set<int> c2;
        for(int i=0; i<m; i++)
        {
            int value;
            cin>>value;

            if(value <= k) 
            {
                c2.insert(value);
            }
        }

        bool fitSize = c1.size() >= k/2 && c2.size() >= k/2;
        c1.insert(c2.begin(), c2.end());
        bool kSize = c1.size() >= k;

        if(fitSize && kSize)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}