// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    long long XC, YC, r, X, Y;
    cin >> XC >> YC >> r >> X >> Y;

    long long dx = X - XC;
    long long dy = Y - YC;

    if(dx*dx + dy*dy < r*r)
        cout << "The point is inside the circle\n";
    else
        cout << "The point is not inside the circle\n";
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
