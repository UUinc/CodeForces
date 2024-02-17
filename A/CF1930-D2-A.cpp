//https://codeforces.com/contest/1930/problem/A
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<2*n; i++)
        {
            int v;
            cin>>v;
            arr.push_back(v);
        }

        int sum=0;
        while(n--)
        {
            auto _min = min_element(arr.begin(), arr.end());
            sum += *_min;
            arr.erase(_min);

            _min = min_element(arr.begin(), arr.end());
            arr.erase(_min);
        }

        cout<<sum<<"\n";
    }

    return 0;
}