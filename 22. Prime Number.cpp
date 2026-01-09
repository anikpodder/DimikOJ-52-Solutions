// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    
    return true;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    
    int ans = 0;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            ans++;
        }
    }
    
    cout << ans << '\n';
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