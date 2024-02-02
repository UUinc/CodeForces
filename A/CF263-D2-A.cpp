//https://codeforces.com/contest/263/problem/A
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int res;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int value;
            cin>>value;            
            if(value == 1)
                res = abs(2-i) + abs(2-j);
        }
    }

    cout<<res;
    return 0;
}