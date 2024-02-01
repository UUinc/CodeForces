//https://codeforces.com/contest/734/problem/A
#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;

    int stack = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
            stack++;
        else
            stack--;
    }

    if(stack == 0) cout<<"Friendship";
    if(stack > 0) cout<<"Anton";
    if(stack < 0) cout<<"Danik";

    return 0;
}