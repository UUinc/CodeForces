// https://codeforces.com/contest/337/problem/B
#include <iostream>

using namespace std;

int bigDiv(int x, int y)
{
    for(int i=max(x,y); i>1; i--)
    {
        if(x%i==0 && y%i==0)
            return i;
    }

    return 1;
}

int main()
{
    int a, b, c, d;
    int x, y;
    cin >> a >> b >> c >> d;

    x = a*d - b*c;
    if(x<0)
        y = b*c;
    else
        y = a*d;

    int coef = bigDiv(x,y);
    cout << abs(x)/coef << "/" << y/coef << "\n";
    return 0;
}