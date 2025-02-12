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

   int trailZeros = 0;
   while(n / 5 > 0)
   {
      trailZeros += n / 5;
      n /= 5;
   }

   cout << trailZeros << "\n";
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
