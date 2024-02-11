// https://codeforces.com/contest/1928/problem/A
#include <iostream>

using namespace std;

bool isDiff(int a, int b, int a2, int b2)
{
    if (a == a2 && b == b2)
        return false;
    if (a == b2 && b == a2)
        return false;
    return true;
}

string isCuttable(int a, int b)
{
    bool cut1 = false;
    bool cut2 = false;

    if (a % 2 == 0 || b % 2 == 0)
    {
        if (a % 2 == 0)
        {
            int a2 = a / 2;
            int b2 = b * 2;

            cut1 = isDiff(a, b, a2, b2);
        }

        if (b % 2 == 0)
        {
            int b2 = b / 2;
            int a2 = a * 2;

            cut2 = isDiff(a, b, a2, b2);
        }

        if (cut1 || cut2)
            return "yes";
        return "no";
    }

    return "no";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << isCuttable(a, b) << "\n";
    }

    return 0;
}