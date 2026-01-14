// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    string s;
    cin >> s;

    bool isPalindrome = true;
    int n = s.size();
    
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Yes! It is palindrome!\n";
    else
        cout << "Sorry! It is not palindrome!\n";
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