//https://codeforces.com/contest/186/problem/B
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool sortbyheight(pair<int,double> l1, pair<int,double> l2)
{
    if(l1.second == l2.second)
        return l1.first < l2.first;
    return l1.second > l2.second;
}

int main()
{
    int n, t1, t2, k;
    cin>>n>>t1>>t2>>k;

    vector<pair<int, double>> list;
    for(int i=1; i<=n; i++)
    {
        int v1, v2;
        cin>>v1>>v2;

        double percentage = (100-k)/100.0;
        double height = v1 * t1 * percentage + v2 * t2;
        double height2 = v2 * t1 * percentage + v1 * t2;

        list.push_back({i, max(height, height2)});
    }

    sort(list.begin(), list.end(), sortbyheight);

    for(pair<int, double> l : list)
    {
        printf("%d %.2f\n", l.first, l.second);
    }

    return 0;
}