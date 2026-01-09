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
        cout << s[i] - 'A' + 1;
    }
    
    cout << '\n';
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