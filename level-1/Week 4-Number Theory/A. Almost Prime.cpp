#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool prime_factorization (int n) {

    set<int>factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            factors.insert(i);
            n /= i;
        }
    }
    if (n != 1) factors.insert(n);

    return factors.size() == 2;
}

signed main()
{
    matador 
    int n,cnt = 0; cin>>n;
    
    for (int i = 1; i <= n; i++) cnt += prime_factorization(i);
    
    cout << cnt;
}
