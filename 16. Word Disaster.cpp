// Author : Anik Podder
// CF Handle : anikpodder
#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve() 
{
    string inputString;
    getline(cin, inputString);

    stringstream stringStream(inputString);
    string word;

    while (stringStream >> word) 
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
    
    cout << endl; 
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