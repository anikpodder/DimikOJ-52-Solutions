// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve()
{
    int arr[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + 3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
}

int main()
{
    Fast
    int tc;
    cin >> tc;
        
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case " << t << ": ";
        solve();
    }
}
