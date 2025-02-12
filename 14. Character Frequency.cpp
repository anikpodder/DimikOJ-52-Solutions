// Author : Anik Podder
// CF Handle : anikpodder
#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

void solve() 
{
    int n;
    cin >> n;
    cin.ignore();
    
    while (n--)
    {
        string inputString;
        getline(cin, inputString);
        
        char character;
        cin >> character;
        cin.ignore();
        
        int count = 0;
        
        for (size_t i = 0; i < inputString.size(); ++i)
        {
            if (inputString[i] == character) count++;
        }
        
        if (count > 0) 
        {
            cout << "Occurrence of '" << character << "' in '" << inputString << "' = " << count << endl;
        } 
        else 
        {
            cout << "'" << character << "' is not present" << endl;
        }
    }
}

int main()
{
    Fast
    solve();
}