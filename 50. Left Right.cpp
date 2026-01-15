// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L') 
        {
            s[i] = s[i - 1];
        }
        else if(s[i] == 'R') 
        {
            s[i] = s[i + 1];
        }
    }

    cout << s << '\n';
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