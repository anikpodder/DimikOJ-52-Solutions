// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    long long n;
    cin >> n;

    long long sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    long long total = n * (n + 1) / 2;
    cout << total - sum << '\n';
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