//https://codeforces.com/contest/9/problem/A
#include<iostream>

using namespace std;

int main()
{
    int Y,W;
    cin>>Y>>W;
    int p = 6-max(Y,W)+1;

    switch(p)
    {
        case 2:
            cout<<"1/3"<<"\n";
            return 0;
        case 3:
            cout<<"1/2"<<"\n";
            return 0;
        case 4:
            cout<<"2/3"<<"\n";
            return 0;
        case 6:
            cout<<"1/1"<<"\n";
            return 0;
    }

    cout<<p<<"/6"<<"\n";

    return 0;
}