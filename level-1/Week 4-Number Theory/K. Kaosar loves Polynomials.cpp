#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

const int MOD = 1e9 + 7;

int fast_power(int base, int exp) {
    if (exp == 0) return 1;
    
    int res = fast_power(base, exp / 2);
    
    res = (res * res) % MOD;
    
    if (exp % 2 == 1) 
        res = (res * (base % MOD)) % MOD;
    
    return res;
}



signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int k,n,sum = 0; cin>>k>>n;

        for (int i = 0; i <= n; i++)
        {
            int val; cin>>val; 
            sum = (sum + (val % MOD) + MOD) % MOD;
        }
        
        cout << fast_power(sum , k) << "\n";
    }
    
}

