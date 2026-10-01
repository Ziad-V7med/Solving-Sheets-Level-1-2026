#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; vector<int>v;

bool solve (int i , int deg) {

    if (i == n) return deg == 0;

    return solve(i + 1 , (deg + v[i]) % 360) || solve(i + 1 , (deg - v[i] + 360) % 360);
}

signed main() {
    matador
    
       cin >> n;
       for (int i = 0; i < n; i++) {
          int val; cin >> val;
          v.push_back(val);
       }

       cout << (solve(0 , 0) ? "YES\n" : "NO\n");    
    
}