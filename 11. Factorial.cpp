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

   long long fact = 1;
   for(int i = 1; i <= n; i++)
   {
      fact *= i;
   }

   cout << fact << '\n';
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
