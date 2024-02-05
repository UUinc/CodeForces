//https://codeforces.com/contest/102/problem/B
#include<iostream>

using namespace std;

int main()
{
    string n;
    cin>>n;

    int count=0;

    while(n.size() > 1)
    {
        long long int sum=0;
        for(char c : n)
        {
            sum += (c - 48); 
        }

        count++;
        n = to_string(sum);
    }

    cout<<count;
    
    return 0;
}