// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    long long n;
    cin >> n;

    if(n >= 6) cout << 6 << '\n';
    if(n >= 28) cout << 28 << '\n';
    if(n >= 496) cout << 496 << '\n';
    if(n >= 8128) cout << 8128 << '\n';
    if(n >= 33550336) cout << 33550336 << '\n';
    
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