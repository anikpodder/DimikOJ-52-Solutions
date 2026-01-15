// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve()
{
    int n1;
    cin >> n1;
    
    vector<int> v;
    for(int i = 0; i < n1; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int n2;
    cin >> n2;
    
    for(int i = 0; i < n2; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
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