// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    int rev = 0;
    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    cout << rev << '\n';
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