// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
    int n;
  
    cin >> n;
  
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "*";
        }
        cout << endl;
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

        if(tc == 0)
            break;
        else
            cout << endl;
    }
}
