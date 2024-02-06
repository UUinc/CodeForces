//https://codeforces.com/contest/1927/problem/B
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int alpha[26] = {0};
        char trace[n];

        for(int i=0; i<n; i++)
        {
            int value;
            cin>>value;

            int j;
            for(j=0; j<26; j++)
                if(alpha[j] == value) break;

            alpha[j]++;
            trace[i] = 'a'+j;
        }

        for(int i=0; i<n; i++)
        {
            cout<<trace[i];
        }
        cout<<"\n";
    }

    return 0;
}