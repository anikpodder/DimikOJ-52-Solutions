// Author : Anik Podder
// CF Handle : anikpodder
#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
    int i, j = 0;
    for (i=1000; i>0; i--)
    {
        cout << i << " ";
        j++;
        if (j % 5 == 0)
        cout << endl;
    }
}

int main()
{
    Fast
    solve();
}