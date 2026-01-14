// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << m;
            if(j < i) cout << ' ';
        }
        cout << '\n';
    }

    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << m;
            if(j < i) cout << ' ';
        }
        cout << '\n';
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
        cout << '\n';
    }
}
