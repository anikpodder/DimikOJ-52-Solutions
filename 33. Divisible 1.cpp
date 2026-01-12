// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long start = ((A + C - 1) / C) * C;
    for(long long i = start; i <= B; i += C)
    {
        cout << i << '\n';
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