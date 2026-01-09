// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


void solve()
{
    int n;
    cin >> n;
    
    int arr[n + 1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
    
    cout << '\n';
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