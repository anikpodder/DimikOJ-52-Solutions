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

   int sq = sqrt(n);
   if(sq * sq == n)
   {
      cout << "YES\n";
   }
   else
   {
      cout << "NO\n";
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
