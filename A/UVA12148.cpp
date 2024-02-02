// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3300
#include <iostream>
#include <vector>

using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isNextDay(tuple<int, int, int> date1, tuple<int, int, int> date2)
{
    int d1 = get<0>(date1), d2 = get<0>(date2);
    int m1 = get<1>(date1), m2 = get<1>(date2);
    int y1 = get<2>(date1), y2 = get<2>(date2);

    if(m1 == 12 && d1 == 31 && m2 == 1 && d2 == 1)
    {
        return y1 + 1 == y2;
    }

    bool isLeapYear = y1 % 4 == 0 ? y1 % 100 != 0 : false;
    month[2] = isLeapYear ? 29 : 28;
    if(d1 == month[m1] && d2 == 1 && m2 == m1 + 1) return true;

    if(d1 + 1 == d2 && m1 == m2 && y1 == y2) return true;

    return false;
}

int main()
{
    vector<pair<int, int>> T;

    int N;
    while (true)
    {
        cin>>N;
        if(N == 0) break;

        int days = 0, consumed = 0;
        int prevD=-1, prevM=-1, prevY=-1, prevC=-1;
        for(int i=0; i<N; i++)
        {
            int d, m, y, c;
            cin>>d>>m>>y>>c;

            bool v = isNextDay({prevD, prevM, prevY}, {d, m, y});
            if(v)
            {
                days++;
                consumed += c-prevC;
            }

            prevD = d;
            prevM = m;
            prevY = y;
            prevC = c;
        }

        T.push_back({days, consumed});
    }

    for(const pair<int, int> item : T)
    {
        cout << item.first << " " << item.second <<"\n";
    }

    return 0;
}