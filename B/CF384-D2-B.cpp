// https://codeforces.com/contest/384/problem/B
#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int len = m * (m - 1) / 2;

    set<pair<int, int>> pv;

    for (int i = 1; i < m; i++)          // m-1
        for (int j = i + 1; j <= m; j++) // m / 2
        {
            if (k == 0)
            {
                pv.insert({i, j});
            }
            else
            {
                pv.insert({j, i});
            }
        }

    cout<<pv.size()<<"\n";
    for (pair<int, int> p : pv)
        cout << p.first << " " << p.second << "\n";

    return 0;
}