// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << fixed << setprecision(3);
    cout << "Area = " << area << '\n';
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