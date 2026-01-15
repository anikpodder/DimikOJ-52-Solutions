// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.size();
    int n2 = s2.size();
    int index = -1;

    for(int i = 0; i <= n1 - n2; i++)
    {
        bool match = true;
        for(int j = 0; j < n2; j++)
        {
            if(s1[i + j] != s2[j])
            {
                match = false;
                break;
            }
        }

        if(match)
        {
            index = i;
            break;
        }
    }

    cout << index << '\n';
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