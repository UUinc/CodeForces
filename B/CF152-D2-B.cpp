//https://codeforces.com/contest/152/problem/B
#include<iostream>

#define ll  long long

using namespace std;

ll n,m;

struct Position
{
    ll x;
    ll y;

    Position(){}
    Position(ll a, ll b)
    {
        x = a;
        y = b;
    }

    Position Sum(Position p)
    {
        return Position(p.x + x, p.y + y);
    }

    Position Mul(ll v)
    {
        return Position(v * x, v * y);
    }
};

bool isOutYard(Position current, Position vector)
{
    ll x = current.x + vector.x;
    ll y = current.y + vector.y;
    if(x < 1 || x > n || y < 1 || y > m)
    {
        return true;
    }
    return false;
}

int main()
{
    cin>>n>>m;
    Position init;
    cin>>init.x>>init.y;

    ll k;
    cin>>k;

    ll count=0;
    while(k--)
    {
        Position vector;
        cin>>vector.x>>vector.y;

        //Binary Search
        ll steps;
        ll l=0;
        ll r=1e9+9;
        ll mid;

        while(l <= r)
        {
            mid = l+(r-l)/2;

            if(isOutYard(init, vector.Mul(mid)))
            {
                r = mid - 1;
            }
            else
            {
                steps = mid;
                l = mid + 1;
            }
        }

        count += steps;
        //increment pos
        init = init.Sum(vector.Mul(steps));
    }

    cout<<count;
    return 0;
}