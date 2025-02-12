// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
   float a, b, c,rr,cr;
   cin >> a >> b >> c;
      
   cr = b / ((300 - c)/6);
   if(b > a)
   {
      rr = 0.00;
   }
   else
   {
      rr = (a + 1 - b) / (c / 6);
   }
       
   cout << fixed << setprecision(2) << cr << " " << rr  << "\n";
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
