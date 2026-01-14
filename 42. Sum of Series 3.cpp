// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int N;
    cin >> N;

    if(N == 0)
    {
        cout << "1\n";
        return;
    }

    for(int i = N; i >= 2; i--)
    {
        cout << "2^" << i << " + ";
    }
    
    cout << "2 + ";
    cout << "1\n";
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