//https://codeforces.com/contest/1927/problem/A
#include<iostream>

using namespace std;

int main()
{
    int start, end;

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string strip;
        cin>>n;
        cin>>strip;

        start = end = -1;

        for(int i=0; i<n; i++)
        {
            if(strip[i] == 'B')
            {
                if(start == -1) start = i;
                end = i;
            }
        }

        cout<<end-start+1<<"\n";
    }


    return 0;
}