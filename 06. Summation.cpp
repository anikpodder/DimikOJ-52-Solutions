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
  
   int sum = n % 10 + n/10000;
  
   cout << "Sum = " << sum << endl;
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
