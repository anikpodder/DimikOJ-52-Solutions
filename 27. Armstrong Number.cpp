// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    int x = n;
    int sum = 0;

    while(x)
    {
        int d = x % 10;
        sum += d * d * d;
        x /= 10;
    }

    if(sum == n)
    {
        cout << n << " is an armstrong number!\n";
    }
    else
    {
        cout << n << " is not an armstrong number!\n";
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
    }
}