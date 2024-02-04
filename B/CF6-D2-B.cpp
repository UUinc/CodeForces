//https://codeforces.com/contest/6/problem/B
#include<iostream>
#include<map>

using namespace std;

map<char, bool> desk;

int main()
{
    int n, m;
    char c;

    cin>>n>>m>>c;

    char arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char v;
            cin>>v;
            arr[i][j] = v;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char v = arr[i][j];

            if(v == c)
            {
                char deskV = '.';
                if(i!=0)   deskV = arr[i-1][j];
                if(deskV != c && deskV != '.')
                    desk[deskV] = true;

                if(i!=n-1) deskV = arr[i+1][j];
                if(deskV != c && deskV != '.')
                    desk[deskV] = true;

                if(j!=0)   deskV = arr[i][j-1];
                if(deskV != c && deskV != '.')
                    desk[deskV] = true;

                if(j!=m-1) deskV = arr[i][j+1];
                if(deskV != c && deskV != '.')
                    desk[deskV] = true;
            }
        }
    }

    map<char, bool>::iterator it = desk.begin();
    int sum = 0;
    while(it != desk.end())
    {
        sum += (int)it->second;
        it++;
    }

    cout<<sum;

    return 0;
}