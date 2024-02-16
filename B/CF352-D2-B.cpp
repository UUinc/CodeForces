// https://codeforces.com/contest/352/problem/B
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, pair<int, int>> T;
    //initialize T
    for (int i = 0; i < n; i++)
    {
        T[a[i]] = {-1, 0};
    }
    //traitement
    int bad = 0;
    for (int i = 0; i < n; i++)
    {
        if(T[a[i]].second == -1) continue;

        if(T[a[i]].first == -1)
        {
            T[a[i]].first = i;
            continue;
        }

        if(T[a[i]].second == 0)
        {
            T[a[i]].second = i - T[a[i]].first;
            T[a[i]].first = i;
            continue;
        }

        int step = i - T[a[i]].first;
        if(step != T[a[i]].second)
        {
            T[a[i]].first = i;
            T[a[i]].second = -1;
            bad++;
            continue;
        }
        T[a[i]].first = i;
    }

    int len = T.size() - bad;
    cout<<len<<"\n";
    for(auto it = T.begin(); it != T.end(); it++)
    {
        int key = it->first;
        int Px = it->second.second;
        if(Px == -1) continue;
        cout<<key<<" "<<Px<<"\n";
    }

    return 0;
}