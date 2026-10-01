#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

const int MAX = 1e6;
vector<int>sum(MAX + 1);
vector<int>primes;

void sieve () {

    for (int i = 1; i <= MAX / 2; i++) {
        for (int j = 2 * i; j <= MAX; j += i) sum[j] += i; 
    }
}

signed main()
{
    matador 
   
    sieve();
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        
        if (sum[n] > n)
            cout << "abundant\n";

        else if (sum[n] < n) 
            cout << "deficient\n";

        else 
            cout << "perfect\n";
    }
    
}


