// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool inc = true, dec = true;

    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i - 1]) inc = false;
        if(a[i] > a[i - 1]) dec = false;
    }

    if(inc || dec) cout << "YES\n";
    else cout << "NO\n";
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