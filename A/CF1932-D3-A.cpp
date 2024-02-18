//https://codeforces.com/contest/1932/problem/A
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

        char path[n];
        for(int i=0; i<n; i++)
            cin>>path[i];

        int i,coins=0;
        for(i=0; i<n-1; i++)
        {
            if(path[i] == '*')
                break;
            if(path[i] == '@')
                coins++;
            
            if(path[i+1] == '*')
                i++;
        }
        if(i == n-1 && path[n-1] == '@')
            coins++;

        cout<<coins<<"\n";
    }

    return 0;
}