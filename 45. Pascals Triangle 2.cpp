// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

long long nCr(int n, int r) 
{
    long long res = 1;
    
    for (int i = 0; i < r; i++) 
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void solve() 
{
   int n; cin >> n;
   
   for(int i = 1; i <= n + 1; i++)
   {
      for(int j = 1; j <= i; j++)
      {
         if(j == 1 || j == i) 
             cout << 1;
         else 
             cout << nCr(i - 1, j - 1);
         
         if(j != i) cout << " ";
      }
      
      cout << '\n';
   }
   
   cout << '\n';
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
