// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    string s;
    getline(cin, s);

    int count = 0;
    istringstream ss(s);
    string word;
    while(ss >> word) count++;

    cout << "Count = " << count << '\n';
}


int main()
{
    Fast
    
    int tc;
    cin >> tc;
    cin.ignore();
    
    while(tc--)
    {
        solve();
    }
}