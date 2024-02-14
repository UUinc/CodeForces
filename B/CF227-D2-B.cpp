// https://codeforces.com/contest/227/problem/B
#include <iostream>
#include <map>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int queries[m];
    map<int, int> queries_map; 

    for (int i = 0; i < m; i++)
    {
        cin >> queries[i];
        queries_map[queries[i]] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (queries_map.find(arr[i]) == queries_map.end())
            continue;

        queries_map[arr[i]] = i+1;
    }


    ll vasya = 0;
    ll petya = 0;

    for (int i = 0; i < m; i++)
    {
        int v = queries_map[queries[i]];
        int p = n - v + 1;

        vasya += v;
        petya += p;
    }

    cout << vasya << " " << petya << "\n";

    return 0;
}