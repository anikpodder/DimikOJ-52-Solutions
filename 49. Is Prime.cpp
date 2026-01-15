// Author : Anik Podder
// CF Handle : anikpodder

#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool isPrime(long long n)
{
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(long long i = 5; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
        {
            return  false;
        }
    }

    return true;
}

void solve()
{
    long long n;
    cin >> n;

    if(isPrime(n))
        cout << n << " is a prime\n";
    else
        cout << n << " is not a prime\n";
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