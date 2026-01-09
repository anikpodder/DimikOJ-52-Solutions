// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


void solve()
{
     double x;
     cin >> x;
     
     int ans = 0;
     
     while(x > 1)
     {
        x /= 2;   
        ans++;
     }
     
     cout << ans << " days" << '\n';
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