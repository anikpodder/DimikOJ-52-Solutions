// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int N;
    cin >> N;
    
    vector<string> words(N);
    for(int i = 0; i < N; i++)
    {
        cin >> words[i];
    }

    sort(words.begin(), words.end());

    for(int i = 0; i < N; i++)
    {
        cout << words[i] << '\n';
    }
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