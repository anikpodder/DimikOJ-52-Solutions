// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    char c;
    cin >> c;

    if(c >= 'A' && c <= 'Z')
    {
        cout << "Uppercase Character\n";
    }
    else if(c >= 'a' && c <= 'z')
    {
        cout << "Lowercase Character\n";
    }
    else if(c >= '0' && c <= '9')
    {
        cout << "Numerical Digit\n";
    }
    else
    {
        cout << "Special Characters\n";
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