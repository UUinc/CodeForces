//http://codeforces.com/contest/770/problem/A
#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    char password[n+1];
    password[0] = 'a';

    for(int i=1; i<n; i++)
    {
        for(int j=i%k; j<k; j++)
        {
            if(password[i-1] != 'a' + j)
            {
                password[i] = 'a' + j;
                break;
            }
        }
    }
    password[n] = '\0';
    cout<<password;
    return 0;
}