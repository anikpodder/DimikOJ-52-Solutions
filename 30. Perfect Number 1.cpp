// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    string num;
    cin >> num;

    if(
        num == "6" ||
        num == "28" ||
        num == "496" ||
        num == "8128" ||
        num == "33550336" ||
        num == "8589869056" ||
        num == "137438691328" ||
        num == "2305843008139952128" ||
        num == "2658455991569831744654692615953842176"
      )
    {
        cout << "YES, " << num << " is a perfect number!\n";
    }
    else
    {
        cout << "NO, " << num << " is not a perfect number!\n";
    }
}

int main()
{
    Fast
    
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        solve();
    }
}