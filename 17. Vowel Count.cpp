// Author : Anik Podder
// CF Handle : anikpodder
#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
   string s;
   
   char c;
   
   cin >> c;
   
   getline(cin,s);
   
   s = c + s;
   
   int count = 0;
   
   for (int i = 0; i < s.size(); ++i)
   {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        count++;
   }
   
   cout << "Number of vowels = " << count << endl;
   
   
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