#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int fast_power(int base, int exp, int m) {
    if (exp == 0) return 1;
    
    int res = fast_power(base, exp / 2, m);
    
    res = (res * res) % m;
    
    if (exp % 2 == 1) 
        res = (res * (base % m)) % m;
    
    return res;
}



signed main()
{
    matador 
    int w,h; cin>>w>>h;

    cout << fast_power(2 , w + h , 998244353);
}

