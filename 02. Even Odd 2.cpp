// Author : Anik Podder
// CF Handle : anikpodder
#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
   string s;
   
   cin >> s;
   
   if(s[s.size() - 1] & 1)
        cout << "odd" << endl;
   else
        cout << "even" << endl;
}

int main()
{
    Fast

    int t;
    
    cin >> t;
    
    while(t--){

         solve();
    }
}