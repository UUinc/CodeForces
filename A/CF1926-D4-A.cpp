//https://codeforces.com/contest/1926/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int count1=0;
        int count2=0;
        string ch;
       cin >> ch;
       for(char c: ch)
       {
          if(c == 'A')
            count1++;
          else 
            count2++;
       }
 
       if(count1 > count2)
       {
           cout<<"A\n";
       }
       else
       {
           cout<<"B\n";
       }
    }
 
    return 0;
}