// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    double sum = 0.0;
    double fact = 1.0;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;          
        sum += i / fact;
    }

    cout << fixed << setprecision(4) << sum << '\n';
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