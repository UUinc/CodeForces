//https://codeforces.com/contest/16/problem/B
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return a.second > b.second;
}

int main()
{
    int n,m;
    cin>>n>>m;

    //matchbox, matches
    vector<pair<int,int>> matches;
    while(m--)
    {
        int mb, ma;
        cin>>mb>>ma;
        matches.push_back({mb, ma});
    }

    sort(matches.begin(), matches.end(), sortbysec);

    int count=0;
    for(pair<int,int> p : matches)
    {
        if(n <= 0) break;
        
        if(n >= p.first)
        {
            count += p.first * p.second;
            n -= p.first;
        }
        else
        {
            count += n * p.second;
            n = 0;
        }
    }

    cout<<count;

    return 0;
}