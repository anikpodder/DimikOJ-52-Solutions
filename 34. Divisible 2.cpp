// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    unsigned long long a, b, c;
    cin >> a >> b >> c;

    unsigned long long inc = a * b;
    unsigned long long res = inc;

    while(res <= c)
    {
        cout << res << '\n';
        res += inc;
    }
    
    cout << '\n';
}

int main()
{
    Fast

    int tc;
    cin >> tc;

    for(int t = 0; t < tc; t++)
    {
        solve();
    }
}