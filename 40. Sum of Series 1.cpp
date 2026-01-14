// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int X, K;
    cin >> X >> K;

    int sum = 0;
    int powX = 1;

    for(int i = 0; i <= K; i++)
    {
        sum += powX;
        powX *= X;
    }

    cout << "Result = " << sum << '\n';
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