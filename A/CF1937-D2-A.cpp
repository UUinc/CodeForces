//https://codeforces.com/contest/1937/problem/A
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int answer = pow(2, (int)log2(n));
        cout<<answer<<"\n";
    }

    return 0;
}