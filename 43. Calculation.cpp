// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int p, q, c;
    cin >> p >> q >> c;

    int result = 1;

    for(int i = 0; i < q; i++)
    {
        result = (result * p) % c;
    }

    cout << "Result = " << result << '\n';
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