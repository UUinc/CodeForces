//https://codeforces.com/contest/262/problem/B
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<n; i++)
    {
        int v;
        cin>>v;

        if(v>=0) pos.push_back(v);
        else neg.push_back(v);
    }

    bool check = false;
    if(neg.size() != 0)
    if(pos.size() == 0 || pos[0] >= -neg[neg.size()-1])
    {
        check = true;
    }

    for(int i=0; i<k; i++)
    {
        if(i<neg.size())
            neg[i] *= -1;
        else if(check)
        {
            if( (k-i) % 2 == 1 )
                neg[i-1] *= -1;
            break;
        }
        else
        {
            if( (k-i) % 2 == 1 )
                pos[neg.size()-i] *= -1;
            break;
        }
    }

    //SUM
    long long sum=0;
    for(int i=0; i<neg.size(); i++)
    {
        sum += neg[i];
    }
    for(int i=0; i<pos.size(); i++)
    {
        sum += pos[i];
    }

    cout<<sum;
    return 0;
}