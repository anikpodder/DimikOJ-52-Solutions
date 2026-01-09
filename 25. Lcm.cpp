// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


void solve()
{
    long long a, b;
    cin >> a >> b;
    
    long long lcm = (a / gcd(a, b)) * b;
    cout << "LCM = " << lcm << '\n';
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