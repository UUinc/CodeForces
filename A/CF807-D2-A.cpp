//https://codeforces.com/contest/807/problem/A
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    bool isChanged=false;
    vector<int> T;
    int n;
    cin>>n;

    while(n--)
    {
        int a, b;
        cin>>a>>b;
        T.push_back(a);

        //Unique
        if(!isChanged)
            isChanged = a != b;
    }

    if(isChanged)
    {
        cout<<"rated";
        return 0;
    }

    for(int i=0; i<T.size()-1; i++)
    {
        for(int j=i+1; j<T.size(); j++)
        {
            if(T[i] < T[j])
            {
                cout<<"unrated";
                return 0;
            }
        }
    }

    cout<<"maybe";
    return 0;
}