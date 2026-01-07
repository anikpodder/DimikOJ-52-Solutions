// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    string s;
    char c;
    cin >> c;
    getline(cin, s);
    s = c + s;

    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ') count++;
    }

    cout << "Count = " << count + 1 << '\n';
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