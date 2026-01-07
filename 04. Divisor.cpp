// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
    int a;
    cin >> a;
    
    for (int j = 1; j <= a; ++j)
    {
        if (a % j == 0)
        {
            if (j == a)
                cout << j;
            else
                cout << j << " ";
        }
    }
    
    cout << endl;
}

int main()
{
    Fast
    int tc;
    cin >> tc;
        
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case " << t << ": ";
        solve();
    }
}
