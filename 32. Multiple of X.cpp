// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    long long X, N;
    cin >> X >> N;

    if(X > N)
    {
        cout << "Invalid!\n";
        return;
    }

    for(long long i = X; i <= N; i += X)
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