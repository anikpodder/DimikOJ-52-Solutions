// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
    string s;
    getline(cin, s);
    
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if(isdigit(s[i]) && (s[i + 1] == ' ' || i == s.size() - 1)) ans++;
    }
    
    cout << ans << "\n";
}

int main()
{
    Fast
    
    int tc;
    cin >> tc;
    
    cin.ignore();
    
    while(tc--)
    {
        solve();
    }
}
