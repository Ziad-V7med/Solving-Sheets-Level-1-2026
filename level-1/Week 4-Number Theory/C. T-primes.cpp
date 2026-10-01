#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool T_Primes (int num) {

    int sqr = sqrt(num);

    if (sqr * sqr != num) return false;

    vector<int>divisor;
    if (sqr == 1) return false;
    
    for (int i = 2; i * i <= sqr; i++)
    {
        if (sqr % i == 0) return false;
    }
    
    return true;
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;

        cout << (T_Primes(n) ? "YES\n" : "NO\n");
    }
    
}
