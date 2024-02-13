// https://codeforces.com/contest/215/problem/B
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double calc_r2(int r1, int P1, int P2, double ratio)
{
    return sqrt((pow(r1, 2) * P1) / (ratio * P2 + P1));
}

int main()
{
    int n;
    cin >> n;
    int X[n];
    for (int i = 0; i < n; i++)
        cin >> X[i];

    int m;
    cin >> m;
    int Y[m];
    for (int i = 0; i < m; i++)
        cin >> Y[i];

    int k;
    cin >> k;
    int Z[k];
    for (int i = 0; i < k; i++)
        cin >> Z[i];

    double A, B;
    cin >> A >> B;
    double ratio = A / B;

    // Logic
    sort(X, X + n, [](int v1, int v2)->bool{ return v1 > v2; });
    sort(Y, Y + m, [](int v1, int v2)->bool{ return v1 > v2; });
    sort(Z, Z + k);

    int r1_max = X[0];
    int P1_max = Y[0];
    int P2_max = Z[0];

    double r = calc_r2(r1_max, P1_max, P2_max, ratio);
    printf("%.12f", r);

    return 0;
}