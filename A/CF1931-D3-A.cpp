//https://codeforces.com/contest/1931/problem/A
#include<iostream>

using namespace std;

string decode(int n)
{
    int i=26, j=26, k=26;

    while(n-k < 2)
        k--;//22
    
    n -= k;
    while(n-j < 1)
        j--;

    n -= j;
    while(n-i < 0)
        i--;

    char s[4];
    s[0] = 'a'+i-1;
    s[1] = 'a'+j-1;
    s[2] = 'a'+k-1;
    s[3] = '\0';
    return s;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s;
        cin>>s;
        cout<<decode(s)<<"\n";
    }

    return 0;
}