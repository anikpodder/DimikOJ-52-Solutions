// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve()
{
    int n; 
    cin >> n;
    cin.ignore();

    while(n--)
    {
        string s; 
        getline(cin, s);

        for(char c : s)
        {
            if(isVowel(c)) cout << c;
        }
        
        cout << '\n';

        for(char c : s)
        {
            if(!isVowel(c) && c != ' ') cout << c;
        }
        
        cout << '\n';
    }
}

int main()
{
    Fast
    solve();
}