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

    int frequency[26] = {0};
    vector<char> order;

    for (char letter : inputString) 
    {
        if (letter >= 'a' && letter <= 'z') 
        {
            int index = letter - 'a';
            if (frequency[index] == 0) 
            {
                order.push_back(letter);
            }
            frequency[index]++;
        }
    }

    for (char letter : order) 
    {
        cout << letter << " = " << frequency[letter - 'a'] << endl;
    }
}


int main()
{
    Fast
    
    int tc;
    cin >> tc;

    cin.ignore();

     for (int i = 0; i < tc; i++) 
     {
        solve();
        if (i < tc - 1) 
        {
            cout << endl;
        }
    }
}