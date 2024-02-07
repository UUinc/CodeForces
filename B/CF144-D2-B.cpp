//http://codeforces.com/contest/144/problem/B
#include<iostream>
#include<set>
#include<cmath>

using namespace std;

bool isCold(int radiators[][3], int n, pair<int, int> sit)
{
    for(int i=0; i<n; i++)
    {
        double dist = sqrt(pow(sit.first - radiators[i][0], 2) + pow(sit.second - radiators[i][1], 2));
        if(dist <= radiators[i][2])
            return false;
    }

    return true;
}

int main()
{
    int xa, ya, xb, yb;
    cin>>xa>>ya>>xb>>yb;

    int n;
    cin>>n;

    //save radiators
    int radiators[n][3];
    for(int i=0; i<n; i++)
    {
        int x, y, r;
        cin>>x>>y>>r;
        radiators[i][0] = x;
        radiators[i][1] = y;
        radiators[i][2] = r;
    }

    //save general sits
    set<pair<int, int>> generalSits;
    for(int x=min(xa, xb); x<=max(xa, xb); x++)
    {
        generalSits.insert({x, ya});
        generalSits.insert({x, yb});
    }
    for(int y=min(ya, yb); y<=max(ya, yb); y++)
    {
        generalSits.insert({xa, y});
        generalSits.insert({xb, y});
    }

    int blanket = 0;
    for(pair<int, int> v : generalSits)
    {
        if(isCold(radiators, n, v))
            blanket++;
    }

    cout<<blanket;
    return 0;
}