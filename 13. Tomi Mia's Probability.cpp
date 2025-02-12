// Author : Anik Podder
// CF Handle : anikpodder

#include<bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"

int Factorial(int n) 
{
    if (n <= 1) 
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

void solve()
{
    string inputString; 
    getline(cin, inputString);
   
    map<string, int> wordFrequency;
   
    istringstream inputStream(inputString);
   
    string word;
   
    while (inputStream >> word)
    {
        wordFrequency[word]++;
    }
   
    int totalWords = 0;
   
    for (auto entry : wordFrequency) 
    {
        totalWords += entry.second;
    }
   
    int totalFactorial = Factorial(totalWords);
   
    int denominator = 1;
   
    for (auto entry : wordFrequency)
    {
        if (entry.second > 1) 
        {
            denominator *= Factorial(entry.second);
        }
    }
   
    cout << "1/" << totalFactorial / denominator << endl;
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
